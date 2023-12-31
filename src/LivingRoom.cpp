/**
 * @author CS Suryadevara <chandrashekar.suryad@uleth.ca>
 * @date 2022-11-10, 2022-10-03
 */

#include <map>
#include <string>
#include <iostream>

#include "LivingRoom.h"
#include "Coordinate.h"

void LivingRoom::hint() {
  if (coord->floor == 1 && coord->x == 2 && coord->y == 1) {
    std::cout << "               at 21";
  }
}

