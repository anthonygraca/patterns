#ifndef DESIGN_PATTERNS_CREATIONAL_BUILDER_STANDARD_MAZE_BUILDER_H_
#define DESIGN_PATTERNS_CREATIONAL_BUILDER_STANDARD_MAZE_BUILDER_H_

#include "creational/builder/MazeBuilder.h"
#include "creational/map-site.h"
#include "creational/maze.h"
#include "creational/room.h"

namespace patterns {
class StandardMazeBuilder : public MazeBuilder {
 public:
  StandardMazeBuilder() = default;

  virtual void BuildMaze() override;
  virtual void BuildRoom(int) override;
  virtual void BuildDoor(int, int) override;

  virtual Maze* GetMaze() override;
 private:
  Direction CommonWall(Room*, Room*);
  Maze* current_maze_{nullptr};
};
} // namespace patterns
#endif
