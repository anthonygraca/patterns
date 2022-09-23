#include <cstddef>
#include <gtest/gtest.h>

#include "maze.h"
#include "room.h"
#include "wall.h"
#include "door.h"

using namespace patterns;

TEST(NaiveCreateMaze, CreateMaze) {
  Maze* a_maze = new Maze;
  EXPECT_NE(nullptr, a_maze);
  delete a_maze;
}

TEST(NaiveCreateMaze, CreateRooms) {
  Room* r1 = new Room(1);
  Room* r2 = new Room(2);
  EXPECT_NE(nullptr, r1);
  EXPECT_NE(nullptr, r2);
  delete r1;
  delete r2;
}

TEST(NaiveCreateMaze, AddRoomsToMaze) {
  Maze* a_maze = new Maze;
  Room* r1 = new Room(1);
  Room* r2 = new Room(2);
  a_maze->AddRoom(r1);
  a_maze->AddRoom(r2);
  EXPECT_EQ(r1, a_maze->RoomNumber(1));
  EXPECT_EQ(r2, a_maze->RoomNumber(2));
  delete a_maze;
  delete r1;
  delete r2;
}

TEST(NaiveCreateMaze, AddWallsAndDoorsToRooms) {
  Maze* a_maze = new Maze;
  Room* r1 = new Room(1);
  Room* r2 = new Room(2);
  Door* the_door = new Door(r1, r2);
   
  a_maze->AddRoom(r1);
  a_maze->AddRoom(r2);

  Wall* walls[6];
  for (int i = 0; i < 6; i++) {
    walls[i] = new Wall;
  }
  
  r1->SetSide(Direction::North, walls[0]);
  r1->SetSide(Direction::East, the_door);
  r1->SetSide(Direction::South, walls[1]);
  r1->SetSide(Direction::West, walls[2]);

  r2->SetSide(Direction::North, walls[3]);
  r2->SetSide(Direction::East, walls[4]);
  r2->SetSide(Direction::South, walls[5]);
  r2->SetSide(Direction::West, the_door);
  
  EXPECT_EQ(the_door, r1->GetSide(Direction::East));
  EXPECT_EQ(the_door, r2->GetSide(Direction::West));
  delete a_maze;
  delete r1;
  delete r2;
  delete the_door;
  for (int i = 0; i < 6; i++) {
    delete walls[i];
  }
}
