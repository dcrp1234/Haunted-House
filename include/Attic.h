/**
 * @author CS Suryadevara <chandrashekar.suryad@uleth.ca>
 * @date 2022-11-10, 2022-10-03
 */

#ifndef ATTIC_H_INCLUDED
#define ATTIC_H_INCLUDED

#include <map>
#include <string>

#include "SpaceType.h"
#include "Coordinate.h"

/**
 * @class Attic Attic.h "Attic.h"
 * @brief An abstract class, which helps the user to interact with objects of attic class
 */
class Attic : public SpaceType {
 public:
  /**
   * @brief Constructor to move around the attic
   * @param[in] coordinate
   */
  Attic(Coordinate *c1);

  /**
   * @brief Gives a hint to the user
   */
  void hint();

  /**
   * @brief Destructor
   */
  ~Attic() {
  }
  /**
   * @brief Provides description to the user after every step
   */

 private:
  Coordinate *coord;
};
#endif // ATTIC_H_INCLUDED
