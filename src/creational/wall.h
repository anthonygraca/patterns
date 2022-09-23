#ifndef PATTERNS_DESIGN_CREATIONAL_WALL_H_
#define PATTERNS_DESIGN_CREATIONAL_WALL_H_

#include "map-site.h"

namespace patterns {
class Wall : public MapSite {
 public:
  Wall() = default;

  virtual void Enter() {};
};
} // namespace patterns
#endif
