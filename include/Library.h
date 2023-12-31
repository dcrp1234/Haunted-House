/**
 * @author CS Suryadevara <chandrashekar.suryad@uleth.ca>
 * @date 2022-11-10, 2022-10-03
 */

#ifndef LIBRARY_H_INCLUDED
#define LIBRARY_H_INCLUDED

#include "SpaceType.h"
#include "Coordinate.h"

/**
 * @class Library Library.h "Library.h"
 * @brief Library instance
 */
class Library : public SpaceType {
 public:
  /**
   * @brief Constructor, to move around the library
   * @param Coordinate c reference of room
   */
  Library(Coordinate *c);

  void hint();
  /**
   * @brief Destructor
   */
  ~Library() {
    delete coord;
  }

 private:
  Coordinate *coord;
};

#endif // LIBRARY_H_INCLUDED
