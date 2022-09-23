#ifndef PATTERNS_DESIGN_CREATIONAL_MAZE_H_
#define PATTERNS_DESIGN_CREATIONAL_MAZE_H_

#include <unordered_map>

#include "room.h"

namespace patterns {
class Maze {
 public:
  Maze() = default;

  void AddRoom(Room* r) {
    rooms_.insert({r->GetRoomNumber(), r});
  };
  Room* RoomNumber(int n) const {
    return rooms_.at(n);
  };
 private:
  std::unordered_map<int, Room*> rooms_;
};
} // namespace patterns

#endif
