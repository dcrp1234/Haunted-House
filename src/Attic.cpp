/**
 * @author CS Suryadevara <chandrashekar.suryad@uleth.ca>
 * @date 2022-11-10, 2022-10-03
 */

#include <map>
#include <string>
#include <iostream>

#include "Attic.h"
#include "Coordinate.h"
Attic::Attic(Coordinate *c)
    :
    coord { c } {
}
void Attic::hint() {
  if (coord->floor == 2) {
    if (coord->y == 0) {
      std::cout << " ";  ///hints atstairs description
    } else if (coord->y == 1) {
      std::cout << " ";  ///hints atkey movement description
    } else if (coord->y == 2) {
      std::cout << " ";  ///hints at death description
    }
  }
}

