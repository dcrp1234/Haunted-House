/**
 * @author CS Suryadevara <chandrashekar.suryad@uleth.ca>
 * @date 2022-11-10, 2022-10-03
 */

#ifndef MOVEMENT_H_INCLUDED
#define MOVEMENT_H_INCLUDED

#include <string>
#include <utility>
#include <vector>

#include "Coordinate.h"
#include "Error.h"
#include "Character.h"

class Movement {
 public:
  /**
   * @brief initializes the direction as north always
   */
  Movement();
  /**
   * @brief determines if moving right is valid based on direction facing and grid
   * @param Coordinate c reference
   */
  void right(Coordinate *c, int map, Character *P);
  /**
   * @brief  determines if moving left is valid based on direction facing and grid
   * @param Coordinate c reference
   */
  void left(Coordinate *c, int map, Character *P);
  /**
   * @brief  determines if moving backward is valid based on direction facing and grid
   * @param Coordinate c reference
   */
  void backward(Coordinate *c, int map, Character *P);
  /**
   * @brief  determines if moving forward is valid based on direction facing and grid
   * @param Coordinate c reference
   */
  void forward(Coordinate *c, int map, Character *P);
  /**
   * @brief increases floor, xy remains same
   * @param Coordinate c reference
   */
  void GoUpstairs(Coordinate *c);
  /**
   * @brief decreases floor, xy remains same
   * @param Coordinate c reference
   */
  void GoDownstairs(Coordinate *c);

 private:
  Error E;
  std::vector<int> Error_left = { 10000, 10003, 10010, 10020, 10022, 10103,
      10122, 10203, 10201, 10211, 10221, 10222, 11100, 11200, 11101, 11002 };
  std::vector<int> Error_right = { 10001, 10002, 10011, 10023, 10021, 10102,
      10123, 10200, 10202, 10210, 10220, 10223, 11000, 11101, 11100, 11201 };
  std::vector<int> Error_back = { 10000, 10002, 10012, 10021, 10022, 10100,
      10121, 10200, 10203, 10213, 10223, 10221, 11003, 11102, 11103, 11202,
      12000 };
  std::vector<int> Error_front = { 10003, 10001, 10013, 10020, 10023, 10101,
      10120, 10201, 10202, 10212, 10220, 10222, 11002, 11103, 11102, 11203,
      12001 };
};

#endif // MOVEMENT_H_INCLUDED
