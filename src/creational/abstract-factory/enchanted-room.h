#ifndef DESIGN_PATTERNS_CREATIONAL_ABSTRACT_FACTORY_ENCHANTED_ROOM_H_
#define DESIGN_PATTERNS_CREATIONAL_ABSTRACT_FACTORY_ENCHANTED_ROOM_H_

#include "creational/abstract-factory/spell.h"
#include "creational/room.h"
namespace patterns {
class EnchantedRoom : public Room {
 public:
  EnchantedRoom(int n, Spell* spell)
      : Room(n), room_number_{n}, spell_{spell} {
  }
 private:
  int room_number_{-1};
  Spell* spell_{nullptr};
  
};
} // namespace patterns
#endif
