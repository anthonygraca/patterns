#include <cstddef>
#include <gtest/gtest.h>

#include "creational/maze.h"
#include "creational/room.h"
#include "creational/wall.h"
#include "creational/door.h"

using namespace patterns;

TEST(NaiveCreateMaze, CreateMaze) {
  Maze a_maze;
  EXPECT_NE(nullptr, &a_maze);
}

TEST(NaiveCreateMaze, CreateRooms) {
  Room r1(1);
  Room r2(2);
  EXPECT_NE(nullptr, &r1);
  EXPECT_NE(nullptr, &r2);
}

TEST(NaiveCreateMaze, AddRoomsToMaze) {
  Maze a_maze;
  Room r1(1);
  Room r2(2);
  a_maze.AddRoom(&r1);
  a_maze.AddRoom(&r2);
  EXPECT_EQ(&r1, a_maze.RoomNumber(1));
  EXPECT_EQ(&r2, a_maze.RoomNumber(2));
}

/*
  The main problem with this is that it hard codes the maze layout. Changing the
  layout means changing the the code every time which doesn't promote reuse.

  Creational pattens will show how to make this design more flexible.
 */
TEST(NaiveCreateMaze, AddWallsAndDoorsToRooms) {
  Maze a_maze;
  Room r1(1);
  Room r2(2);
  Door the_door(&r1, &r2);
  Wall wall;
  
  a_maze.AddRoom(&r1);
  a_maze.AddRoom(&r2);

  r1.SetSide(Direction::North, &wall);
  r1.SetSide(Direction::East, &the_door);
  r1.SetSide(Direction::South, &wall);
  r1.SetSide(Direction::West, &wall);

  r2.SetSide(Direction::North, &wall);
  r2.SetSide(Direction::East, &wall);
  r2.SetSide(Direction::South, &wall);
  r2.SetSide(Direction::West, &the_door);
  
  EXPECT_EQ(&the_door, r1.GetSide(Direction::East));
  EXPECT_EQ(&the_door, r2.GetSide(Direction::West));
}
