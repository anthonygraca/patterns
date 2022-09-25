#ifndef DESIGN_PATTERNS_CREATIONAL_MAZE_GAME_H_
#define DESIGN_PATTERNS_CREATIONAL_MAZE_GAME_H_

#include <gsl/gsl>

#include "creational/abstract-factory/maze-factory.h"
#include "creational/map-site.h"
#include "creational/maze.h"

namespace patterns {
class MazeGame {
 public:
  Maze* NaiveCreateMaze() {
    Maze* maze = new Maze;
    Room* r1 = new Room(1);
    Room* r2 = new Room(2);
    Door* door = new Door(r1, r2);

    maze->AddRoom(r1);
    maze->AddRoom(r2);

    r1->SetSide(Direction::North, new Wall);
    r1->SetSide(Direction::East, door);
    r1->SetSide(Direction::South, new Wall);
    r1->SetSide(Direction::West, new Wall);

    r2->SetSide(Direction::North, new Wall);
    r2->SetSide(Direction::East, new Wall);
    r2->SetSide(Direction::South, new Wall);
    r2->SetSide(Direction::West, door);

    return maze;
  }
  
  Maze* CreateMaze(MazeFactory& factory) {
    Maze* maze = factory.MakeMaze();
    Room* r1 = factory.MakeRoom(1);
    Room* r2 = factory.MakeRoom(2);
    Door* door = factory.MakeDoor(r1, r2);

    maze->AddRoom(r1);
    maze->AddRoom(r2);

    r1->SetSide(Direction::North, factory.MakeWall());
    r1->SetSide(Direction::East, door);
    r1->SetSide(Direction::South, factory.MakeWall());
    r1->SetSide(Direction::West, factory.MakeWall());

    r2->SetSide(Direction::North, factory.MakeWall());
    r2->SetSide(Direction::East, factory.MakeWall());
    r2->SetSide(Direction::South, factory.MakeWall());
    r2->SetSide(Direction::West, door);

    return maze;
  }
};
} // namespace patterns

#endif
