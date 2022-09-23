#ifndef PATTERNS_DESIGN_CREATIONAL_MAZE_H_
#define PATTERNS_DESIGN_CREATIONAL_MAZE_H_

#include "room.h"

namespace patterns {
class Maze {
 public:
  Maze();

  void AddRoom(Room*);
  Room* RoomNumber(int) const;
// private:
};
} // namespace patterns

#endif
