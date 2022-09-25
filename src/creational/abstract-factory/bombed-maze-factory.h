#ifndef DESIGN_PATTERNS_CREATIONAL_ABSTRACT_FACTORY_BOMBED_MAZE_FACTORY_H_
#define DESIGN_PATTERNS_CREATIONAL_ABSTRACT_FACTORY_BOMBED_MAZE_FACTORY_H_

#include "creational/abstract-factory/bombed-wall.h"
#include "creational/abstract-factory/maze-factory.h"
#include "creational/abstract-factory/room-with-bomb.h"
#include "creational/wall.h"

namespace patterns {
class BombedMazeFactory : public MazeFactory {
 public:
  BombedMazeFactory() = default;

  virtual Wall* MakeWall() const override {
    return new BombedWall;
  }

  virtual Room* MakeRoom(int n) const override {
    return new RoomWithBomb(n);
  }
  
};
} // namespace patterns
#endif
