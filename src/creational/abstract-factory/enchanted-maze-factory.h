#ifndef DESIGN_PATTERNS_CREATIONAL_ABSTRACT_FACTORY_ENCHANTED_MAZE_FACTORY_H_
#define DESIGN_PATTERNS_CREATIONAL_ABSTRACT_FACTORY_ENCHANTED_MAZE_FACTORY_H_

#include "creational/abstract-factory/door-needing-spell.h"
#include "creational/abstract-factory/enchanted-room.h"
#include "creational/abstract-factory/maze-factory.h"
#include "creational/abstract-factory/spell.h"
#include "creational/door.h"
#include "creational/room.h"

namespace patterns {
class EnchantedMazeFactory : public MazeFactory {
 public:
  EnchantedMazeFactory() = default;

  virtual Room* MakeRoom(int n) const override {
    return new EnchantedRoom(n, CastSpell());
  }

  virtual Door* MakeDoor(Room* r1, Room* r2) const override {
    return new DoorNeedingSpell(r1, r2);
  }

 protected:
  Spell* CastSpell() const {
    return new Spell;
  };
  
};
} // namespace patterns
#endif
