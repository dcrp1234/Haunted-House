/**
 * @author CS Suryadevara <chandrashekar.suryad@uleth.ca>
 * @date 2022-11-10, 2022-10-03
 */

#ifndef BASEMENT_H_INCLUDED
#define BASEMENT_H_INCLUDED

#include "SpaceType.h"
#include "Coordinate.h"

/**
 * @class Basement Basement.h "Basement.h"
 * @brief Describes the basement and all the functions to move around the basement level
 */
class Basement : public SpaceType {
 public:
  /**
   * @brief A constructor to move around the basement
   * @param[in] coordinate you are at
   */
  Basement(Coordinate *c)
      :
      coord { c } {
  }
  /**
   * @brief Destructor
   */
  ~Basement() {
  }

  /**
   * @brief Gives a hint to the user to continue the game
   */
  void hint();

  private:
  Coordinate *coord;
};

#endif // BASEMENT_H_INCLUDED
