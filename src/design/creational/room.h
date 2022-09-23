#ifndef PATTERNS_DESIGN_CREATIONAL_ROOM_H_
#define PATTERNS_DESIGN_CREATIONAL_ROOM_H_

#include "map-site.h"

namespace patterns {

class Room : public MapSite {
 public:
  Room(int room_number);

  MapSite* GetSide(Direction) const;
  void SetSide(Direction, MapSite*);

  virtual void Enter();

 private:
  MapSite* sides_[4];
  int room_number_;
  
};

} // namespace patterns

#endif
