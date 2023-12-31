/**
 * @author Prottasha D'cruze
 * @date 2022-11-15
 */

#include <iostream>
#include "Coordinate.h"

//bool Coordinate::Coordinate::operator==(Coordinate* c){
//return (this->x == c.x && this->y == c.y && this->floor == c.floor);
//}
//bool Coordinate::Coordinate::operator!=(Coordinate* c){
//return (this->x != c.x || this->y != c.y || this->floor != c.floor);
//}

//void Coordinate::changeFloor(unsigned int a) {
//floor = a;
//}

bool Coordinate::outOfBounds() {
  if (this->x < 0 || this->y < 0 || this->x > 2 || this->y > 2)
    return true;
  else
    return false;
}
