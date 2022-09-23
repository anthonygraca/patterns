#ifndef PATTERNS_DESIGN_CREATIONAL_ROOM_H_
#define PATTERNS_DESIGN_CREATIONAL_ROOM_H_

#include "map-site.h"

namespace patterns {

class Room : public MapSite {
 public:
  Room(int room_number) : room_number_{room_number}{};

  MapSite* GetSide(Direction d) const {
    switch(d) {
      case Direction::North:
        return sides_[0];
      case Direction::East:
        return sides_[1];
      case Direction::South:
        return sides_[2];
      case Direction::West:
        return sides_[3];
      default:
        return nullptr;
    }
  };
  void SetSide(Direction d, MapSite* m) {
    switch(d) {
      case Direction::North:
        sides_[0] = m;
        break;
      case Direction::East:
        sides_[1] = m;
        break;
      case Direction::South:
        sides_[2] = m;
        break;
      case Direction::West:
        sides_[3] = m;
        break;
      default:
        break;
    }
  };

  int GetRoomNumber(void) const { return room_number_; }

  virtual void Enter() {};

 private:
  MapSite* sides_[4];
  int room_number_;
  
};

} // namespace patterns

#endif
