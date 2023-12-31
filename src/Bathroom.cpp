/**
 * @author CS Suryadevara <chandrashekar.suryad@uleth.ca>
 * @date 2022-11-10, 2022-10-03
 */

#include <map>
#include <string>
#include <iostream>

#include "Bathroom.h"
#include "Coordinate.h"

Bathroom::Bathroom(Coordinate *c)
    :
    coord { c } {
}

void Bathroom::hint() {
  if (coord->x == 1 && coord->y == 2 && coord->floor == 1) {
    std::cout << " ";  ///hints at  bathroom(0,1) description
  }
}
/*bool Bathroom::doorOpen(int A){
 if(A==1){
 return true;
 }
 return false;

 }*/

