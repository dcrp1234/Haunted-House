/**
 * @author CS Suryadevara <chandrashekar.suryad@uleth.ca>
 * @date 2022-11-10, 2022-10-03
 */

#ifndef BATHROOM_H_INCLUDED
#define BATHROOM_H_INCLUDED

#include "SpaceType.h"
#include "Coordinate.h"

/**
 * @class Bathroom Bathroom.h "Bathroom.h"
 * @brief A class to move around the bathroom and use the objects present there
 */
class Bathroom : public SpaceType {
 public:
  /**
   * @brief Helps the user to move around the bathroom
   */
  Bathroom(Coordinate *c);

  /**
   * @brief Destructor
   */
  ~Bathroom() {
  }

  /**
   * @brief Gives hint to the user
   */
  void hint();
 private:
  Coordinate *coord;
};

#endif // BATHROOM_H_INCLUDED
