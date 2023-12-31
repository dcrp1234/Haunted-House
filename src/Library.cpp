/**
 * @author CS Suryadevara <chandrashekar.suryad@uleth.ca>
 * @date 2022-11-10, 2022-10-03
 */

#include <map>
#include <string>
#include <iostream>

#include "Library.h"
#include "Coordinate.h"

Library::Library(Coordinate *c)
    :
    coord { c } {
  if (coord->floor == 1 && coord->x == 0 && coord->y == 2) {
    std::cout
        << "\n\nHints:: Your next destination should be the one room which\n"
            "used to be filled with cry and laughter when they were born.";
  }
}

void Library::hint() {
  if (coord->floor == 1 && coord->x == 0 && coord->y == 2) {
    std::cout << "Unfortunately, you guys entered the balcony and\n"
        "it got destroyed and died by falling on a bed of sharp weapons.";
    exit(0);
  }
}

