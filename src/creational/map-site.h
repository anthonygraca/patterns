#ifndef PATTERNS_DESIGN_CREATIONAL_MAP_SITE_H_
#define PATTERNS_DESIGN_CREATIONAL_MAP_SITE_H_

namespace patterns {
enum class Direction { North, South, East, West};

class MapSite {
 public:
  virtual void Enter() = 0;
};
} // namespace patterns

#endif
