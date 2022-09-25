#ifndef DESIGN_PATTERNS_CREATIONAL_ABSTRACT_FACTORY_DOOR_NEEDING_SPELL_H_
#define DESIGN_PATTERNS_CREATIONAL_ABSTRACT_FACTORY_DOOR_NEEDING_SPELL_H_

#include "creational/door.h"
namespace patterns {
class DoorNeedingSpell : public Door {
 public:
  DoorNeedingSpell(Room* r1, Room* r2) {
  }
};
} // namespace patterns
#endif
