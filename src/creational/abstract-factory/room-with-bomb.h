#ifndef DESIGN_PATTERNS_CREATIONAL_ABSTRACT_FACTORY_ROOM_WITH_BOMB_H_
#define DESIGN_PATTERNS_CREATIONAL_ABSTRACT_FACTORY_ROOM_WITH_BOMB_H_

#include "creational/room.h"

namespace patterns {
class RoomWithBomb : public Room {
 public:
  RoomWithBomb(int n) : room_number_{n} {}

 private:
  int room_number_{-1};
};
} // namespace patterns
#endif
