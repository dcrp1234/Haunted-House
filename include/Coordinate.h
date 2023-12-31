/**
 * @author Prottasha D'cruze
 * @date 2022-11-15
 */

#ifndef COORDINATE_H_INCLUDED
#define COORDINATE_H_INCLUDED

/**
 * @class Coordinate Coordinate.h "Coordinate.h"
 * @brief A class to move around the house
 */
class Coordinate {
 public:
  /**
   * @brief Paramitarized Constructor
   */
  Coordinate(unsigned int f = 0, unsigned int x = 0, unsigned int y = 0,
             char direction = 'N')
      :
      x { x },
      y { y },
      floor { f },
      Direction { direction } {
  }

  /**
   * @brief Destructor
   */
  //virtual ~Coordinate() {
  //}
  /**
   * @brief A function to change the floor in the house
   * @param[in] Floor no.
   */
  bool outOfBounds();
  // bool Coordinate::operator!=(Coordinate* c);
  //bool Coordinate::operator==(Coordinate* c);

  unsigned int floor;
  unsigned int x;
  unsigned int y;
  char Direction;
};

#endif
