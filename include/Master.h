/**
 * @author CS Suryadevara <chandrashekar.suryad@uleth.ca>
 * @date 2022-11-10, 2022-10-03
 */

#ifndef MASTER_H_INCLUDED
#define MASTER_H_INCLUDED

#include "SpaceType.h"
#include "Coordinate.h"

/**
 * @class LivingRoom LivingRoom.h "LivingRoom.h"
 * @brief LivingRoom instance
 */
class Master : public SpaceType {
 public:
  /**
   * @brief Constructor, to move around the master bedroom
   */
  Master(Coordinate *c);

  /**
   * @brief  Provides hint to the user
   */
  void hint();
  /**
   * @brief  Destructor
   */
  ~Master() {
  }

 private:
  Coordinate *coord;
};

#endif // MASTER_H_INCLUDED
