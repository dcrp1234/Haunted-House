/*
 * Room.cpp
 *
 *  Created on: Dec. 7, 2022
 *      Author: tanjero-kamado
 */

#include "Room.h"
#include "Basement.h"
#include "SpaceType.h"
#include "Attic.h"
#include "Child.h"
#include "Library.h"
#include "LivingRoom.h"
#include "Master.h"
#include "Bathroom.h"

Room::Room(Coordinate *c)
    :
    coord { c } {
  // TODO(chandra.suryadevara) Auto-generated constructor stub
}

Room::~Room() {
  // TODO(chandra.suryadevara) Auto-generated destructor stub
  delete coord;
}
SpaceType* Room::createRoom() {
  if (coord->floor == 0) {
    return new Basement(coord);
  } else if (coord->floor == 2) {
    return new Attic(coord);
  } else if (coord->floor == 1 && coord->x == 1 && coord->y == 0) {
    return new Child(coord);
  } else if (coord->floor == 1 && coord->x == 0 && coord->y == 2) {
    return new Library(coord);
  } else if (coord->floor == 1 && coord->x == 2 && coord->y == 1) {
    return new LivingRoom(coord);
  } else if (coord->floor == 1 && coord->x == 0 && coord->y == 0) {
    return new LivingRoom(coord);
  } else if (coord->floor == 1 && coord->x == 1 && coord->y == 2) {
    return new Bathroom(coord);
  } else {
    return nullptr;
  }
}

