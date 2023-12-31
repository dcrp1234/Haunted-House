/**
 * @author CS Suryadevara <chandrashekar.suryad@uleth.ca>
 * @date 2022-11-10, 2022-10-03
 */

#ifndef LIVINGROOM_H_INCLUDED
#define LIVINGROOM_H_INCLUDED

#include "SpaceType.h"
#include "Coordinate.h"

/**
 * @class LivingRoom LivingRoom.h "LivingRoom.h"
 * @brief LivingRoom instance
 */
class LivingRoom : public SpaceType {
 public:
  /**
   * @brief Constructor, to move around the living room
   * @param Coordinate c reference of the room
   */
  LivingRoom(Coordinate *c)
      :
      coord { c } {
  }
  /**
   * @brief  Provides hint to the user
   */
  void hint();
  /**
   * @brief  Destructor
   */
  ~LivingRoom() {
  }

 private:
  Coordinate *coord;
};

#endif // LIVINGROOM_H_INCLUDED
