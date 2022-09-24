#ifndef DESIGN_PATTERNS_CREATIONAL_ABSTRACT_FACTORY_MAZE_FACTORY_H_
#define DESIGN_PATTERNS_CREATIONAL_ABSTRACT_FACTORY_MAZE_FACTORY_H_

#include "creational/door.h"
#include "creational/maze.h"
#include "creational/room.h"
#include "creational/wall.h"

namespace patterns {
class MazeFactory {
 public:
  MazeFactory();
  virtual Maze* MakeMaze() const {
    return new Maze;
  }
  virtual Wall* MakeWall() const {
    return new Wall;
  }
  virtual Room* MakeRoom(int n) const {
    return new Room(n);
  }
  virtual Door* MakeDoor(Room* r1, Room* r2) const {
    return new Door(r1, r2);
  }
};
} //namespace patterns
#endif
