#ifndef DESIGN_PATTERNS_CREATIONAL_BUILDER_MAZE_BUILDER_H_
#define DESIGN_PATTERNS_CREATIONAL_BUILDER_MAZE_BUILDER_H_

#include "creational/maze.h"

namespace patterns {
class MazeBuilder {
 public:
  virtual void BuildMaze() {}
  virtual void BuildRoom(int room) {}
  virtual void BuildDoor(int room_from, int room_to) {}
  virtual Maze* GetMaze() { return nullptr; }
 protected:
  MazeBuilder();
};
} // namespace patterns
#endif
