#include "creational/builder/standard-maze-builder.h"

#include "creational/door.h"
#include "creational/map-site.h"
#include "creational/maze.h"
#include "creational/room.h"
#include "creational/wall.h"

namespace patterns {
void StandardMazeBuilder::BuildMaze() { current_maze_ = new Maze; }

Maze *StandardMazeBuilder::GetMaze() { return current_maze_; }

void StandardMazeBuilder::BuildRoom(int n) {
  if (current_maze_ != nullptr && current_maze_->RoomNumber(n)) {
    Room* room = new Room(n);
    current_maze_->AddRoom(room);

    room->SetSide(Direction::North, new Wall);
    room->SetSide(Direction::East, new Wall);
    room->SetSide(Direction::South, new Wall);
    room->SetSide(Direction::West, new Wall);
  }
}

void StandardMazeBuilder::BuildDoor(int n1, int n2) {
  Room* r1 = current_maze_->RoomNumber(n1);
  Room* r2 = current_maze_->RoomNumber(n2);
  Door* d = new Door(r1, r2);

  r1->SetSide(CommonWall(r1,r2), d);
  r2->SetSide(CommonWall(r2,r1), d);
}

Direction StandardMazeBuilder::CommonWall(Room* r1, Room* r2) {
  return Direction::North;
}
} // namepace patterns
