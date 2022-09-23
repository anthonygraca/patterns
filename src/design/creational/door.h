#ifndef PATTERNS_DESIGN_CREATIONAL_DOOR_H_
#define PATTERNS_DESIGN_CREATIONAL_DOOR_H_

#include <cstddef>

#include "map-site.h"
#include "room.h"

namespace patterns {
class Door : public MapSite {
 public:
  Door(Room* r1 = nullptr, Room* r2= nullptr) : room1_{r1}, room2_{r2} {};

  virtual void Enter() {};
  Room* OtherSideFrom(Room* r) {
    if (room1_ == r) return room2_;
    else if (room2_ == r) return room1_;
    else return nullptr;
  };

 private:
  Room* room1_;
  Room* room2_;
  bool is_open_;
};
} // namespace patterns

#endif
