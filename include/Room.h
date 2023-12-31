/*
 * Room.h
 *
 *  Created on: Dec. 7, 2022
 *      Author: tanjero-kamado
 */

#ifndef INCLUDE_ROOM_H_
#define INCLUDE_ROOM_H_
#include "SpaceType.h"
#include "Coordinate.h"

/**
 * @class Room Room.h "Room.h"
 * @brief A class which creates rooms
 */
class Room {
 public:
  /**
   * @brief Constructor
   */
  Room(Coordinate *c);
  /**
   * @brief Destructor
   */
  ~Room();
  /**
   * @brief  A method to create room
   */
  SpaceType* createRoom();
 private:
  Coordinate *coord;
};

#endif /* INCLUDE_ROOM_H_ */
