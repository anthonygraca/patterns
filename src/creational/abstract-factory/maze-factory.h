#ifndef DESIGN_PATTERNS_CREATIONAL_ABSTRACT_FACTORY_MAZE_FACTORY_H_
#define DESIGN_PATTERNS_CREATIONAL_ABSTRACT_FACTORY_MAZE_FACTORY_H_

#include "creational/door.h"
#include "creational/maze.h"
#include "creational/room.h"
#include "creational/wall.h"

namespace patterns {
/*
  Description: MazeFactory is a class that can create components of mazes; it can
               build rooms, walls, and doors between rooms. It might be used by
               a program that reads plans for mazes from a file and builds the
               corresponding maze. Or it might be used by a program that builds
               mazes randomly. Programs that build mazes take a MazeFactory as
               an argument so the programmer can specify the classes of rooms,
               walls, and doors to construct.

               This is an improvement of NaiveCreateMaze since we are not
               hard-coding class names, allowing us to easily create mazes with
               different components. We can creatre an EnchantedMazeFactory,
               a factory for enchanted mazes, by subclassing MazeFactory.
 */
class MazeFactory {
 public:
  MazeFactory() = default;
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
