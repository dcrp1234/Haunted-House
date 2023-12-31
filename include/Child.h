/**
 * @author CS Suryadevara <chandrashekar.suryad@uleth.ca>
 * @date 2022-11-10, 2022-10-03
 */

#ifndef CHILD_H_INCLUDED
#define CHILD_H_INCLUDED

#include "SpaceType.h"
#include "Coordinate.h"

/**
 * @class Child Child.h "Child.h"
 * @brief A class for child bedroom
 */
class Child : public SpaceType {
 public:
  /**
   * @brief Constructor to move around the child room
   * @param[in] coordinate you are at
   */
  Child(Coordinate *c);

  /**
   * @brief Gives hints to the user
   */
  void hint();

  /**
   * @brief Destructor
   */
  ~Child() {
  }

 private:
  Coordinate *coord;
};

#endif // CHILD_H_INCLUDED
