/**
 * @author CS Suryadevara <chandrashekar.suryad@uleth.ca>
 * @date 2022-11-10, 2022-10-03
 */

#include <map>
#include <string>
#include <iostream>

#include "Child.h"
#include "Coordinate.h"

Child::Child(Coordinate *c)
    :
    coord { c } {
}

void Child::hint() {
  if (coord->floor == 1 && coord->x == 1) {
    if (coord->y == 0) {
      std::cout << "            at 1,0";
    } else if (coord->y == 1) {
      std::cout << "                at 1,1";
    }
  }
}

