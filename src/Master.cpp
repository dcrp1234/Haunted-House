/**
 * @author CS Suryadevara <chandrashekar.suryad@uleth.ca>
 * @date 2022-11-10, 2022-10-03
 */
#include <iostream>
#include <map>
#include <string>
#include <stdlib.h>
#include "Master.h"
#include "Coordinate.h"

Master::Master(Coordinate *c)
    :
    coord { c } {
}

void Master::hint() {
  if (coord->floor == 1 && coord->x == 0 && coord->y == 0) {
    std::cout << "HINT: ALWAYS SEARCH IN TOP TO FIND THE WAY TO ESCAPE,"
        " ALSO REMEMBER PASS: DEATHNOTE ";  ///master bedroom at (0,0) hint
  }
}

