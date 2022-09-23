#ifndef PATTERNS_DESIGN_CREATIONAL_DOOR_H_
#define PATTERNS_DESIGN_CREATIONAL_DOOR_H_

#include <cstddef>

#include "map-site.h"
#include "room.h"

namespace patterns {
class Door : public MapSite {
 public:
  Door(Room* = nullptr, Room* = nullptr);

  virtual void Enter();
  Room* OtherSideFrom(Room*);

 private:
  Room* room1_;
  Room* room2_;
  bool is_open_;
};
} // namespace patterns

#endif
