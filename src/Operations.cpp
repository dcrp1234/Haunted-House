/*
 * Operations.cpp
 *
 *  Created on: Dec. 5, 2022
 *      Author: tanjero-kamado
 */
#include <iostream>

#include "Operations.h"
#include "Coordinate.h"

int Operations::Logic_Operation(Coordinate *coord) {
  if (coord->floor == 2) {
    if (coord->x == 0 && coord->y == 0) {
      if (coord->Direction == 'N') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100
            + coord->y * 10;
        return chord;          //at attic at 0,0 coord facing north value= 12000
      } else if (coord->Direction == 'S') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 1;
        return chord;         //at attic at 0,0 coord facing north value= 120001
      } else {
        return 0;
      }
    } else if (coord->x == 0 && coord->y == 1) {
      if (coord->Direction == 'N') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100
            + coord->y * 10;
        return chord;          //at attic at 0,1 coord facing north value= 12010
      } else if (coord->Direction == 'S') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 1;
        return chord;          //at attic at 0,1 coord facing north value= 12011
      } else {
        return 0;
      }
    } else if (coord->x == 0 && coord->y == 2) {
      int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10;
      return chord;            //at attic at 0,2 coord facing north value= 12020
    } else {
      return 0;
    }
  } else if (coord->floor == 1) {
    if (coord->x == 0 && coord->y == 0) {
      if (coord->Direction == 'N') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100
            + coord->y * 10;
        return chord;         //at master at 0,0 coord facing noeth value= 11000
      } else if (coord->Direction == 'S') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 1;
        return chord;         //at master at 0,0 coord facing south value= 11001
      } else if (coord->Direction == 'E') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 2;
        return chord;          //at master at 0,0 coord facing east value= 11002
      } else if (coord->Direction == 'W') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 3;
        return chord;          //at master at 0,0 coord facing west value= 11003
      } else {
        return 0;
      }
    } else if (coord->x == 0 && coord->y == 1) {
      if (coord->Direction == 'N') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100
            + coord->y * 10;
        return chord;         //at master at 0,1 coord facing noeth value= 11010
      } else if (coord->Direction == 'S') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 1;
        return chord;         //at master at 0,1 coord facing south value= 11011
      } else if (coord->Direction == 'E') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 2;
        return chord;          //at master at 0,1 coord facing east value= 11012
      } else if (coord->Direction == 'W') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 3;
        return chord;          //at master at 0,1 coord facing west value= 11013
      } else {
        return 0;
      }
    } else if (coord->x == 0 && coord->y == 2) {
      if (coord->Direction == 'N') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100
            + coord->y * 10;
        return chord;         //at librry at 0,2 coord facing noeth value= 11020
      } else if (coord->Direction == 'S') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 1;
        return chord;            //at lib at 0,2 coord facing south value= 11021
      } else if (coord->Direction == 'E') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 2;
        return chord;             //at lib at 0,2 coord facing east value= 11022
      } else if (coord->Direction == 'W') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 3;
        return chord;             //at lib at 0,2 coord facing west value= 11023
      } else {
        return 0;
      }
    } else if (coord->x == 1 && coord->y == 0) {
      if (coord->Direction == 'N') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100
            + coord->y * 10;
        return chord;          //at child at 1,0 coord facing noeth value= 11100
      } else if (coord->Direction == 'S') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 1;
        return chord;          //at child at 1,0 coord facing south value= 11101
      } else if (coord->Direction == 'E') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 2;
        return chord;            //at child at 1,0coord facing east value= 11102
      } else if (coord->Direction == 'W') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 3;
        return chord;           //at child at 1,0 coord facing west value= 11103
      } else {
        return 0;
      }
    } else if (coord->x == 1 && coord->y == 1) {
      if (coord->Direction == 'N') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100
            + coord->y * 10;
        return chord;          //at child at 1,1 coord facing noeth value= 11110
      } else if (coord->Direction == 'S') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 1;
        return chord;          //at child at 1,1 coord facing south value= 11111
      } else if (coord->Direction == 'E') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 2;
        return chord;            //at child at 1,1coord facing east value= 11112
      } else if (coord->Direction == 'W') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 3;
        return chord;           //at child at 1,1 coord facing west value= 11113
      } else {
        return 0;
      }
    } else if (coord->x == 1 && coord->y == 2) {
      if (coord->Direction == 'N') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100
            + coord->y * 10;
        return chord;           //at bath at 1,2 coord facing noeth value= 11120
      } else if (coord->Direction == 'S') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 1;
        return chord;           //at bath at 1,2 coord facing south value= 11121
      } else if (coord->Direction == 'E') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 2;
        return chord;            //at bath at 1,2 coord facing east value= 11122
      } else if (coord->Direction == 'W') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 3;
        return chord;            //at bath at 1,2 coord facing west value= 11123
      } else {
        return 0;
      }
    } else if (coord->x == 2 && coord->y == 0) {
      if (coord->Direction == 'N') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100
            + coord->y * 10;
        return chord;         //at stairs at 2,0 coord facing noeth value= 11200
      } else if (coord->Direction == 'S') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 1;
        return chord;         //at stairs at 2,0 coord facing south value= 11201
      } else if (coord->Direction == 'E') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 2;
        return chord;          //at stairs at 2,0 coord facing east value= 11202
      } else if (coord->Direction == 'W') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 3;
        return chord;          //at stairs at 2,0 coord facing west value= 11203
      } else {
        return 0;
      }
    } else if (coord->x == 2 && coord->y == 1) {
      if (coord->Direction == 'N') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100
            + coord->y * 10;
        return chord;         //at living at 2,1 coord facing noeth value= 11210
      } else if (coord->Direction == 'S') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 1;
        return chord;         //at living at 2,1 coord facing south value= 11211
      } else if (coord->Direction == 'E') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 2;
        return chord;          //at living at 2,1 coord facing east value= 11212
      } else if (coord->Direction == 'W') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 3;
        return chord;          //at living at 2,1 coord facing west value= 11213
      } else {
        return 0;
      }
    } else if (coord->x == 2 && coord->y == 2) {
      if (coord->Direction == 'N') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100
            + coord->y * 10;
        return chord;         //at living at 2,2 coord facing noeth value= 11220
      } else if (coord->Direction == 'S') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 1;
        return chord;         //at living at 2,2 coord facing south value= 11221
      } else if (coord->Direction == 'E') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 2;
        return chord;          //at living at 2,2 coord facing east value= 11222
      } else if (coord->Direction == 'W') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 3;
        return chord;          //at living at 2,2 coord facing west value= 11223
      } else {
        return 0;
      }
    } else {
      return 0;
    }
  } else if (coord->floor == 0) {
    if (coord->x == 0 && coord->y == 0) {
      if (coord->Direction == 'N') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100
            + coord->y * 10;
        return chord;       //at basement at 0,0 coord facing noeth value= 10000
      } else if (coord->Direction == 'S') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 1;
        return chord;       //at basement at 0,0 coord facing south value= 10001
      } else if (coord->Direction == 'E') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 2;
        return chord;        //at basement at 0,0 coord facing east value= 10002
      } else if (coord->Direction == 'W') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 3;
        return chord;        //at basement at 0,0 coord facing west value= 10003
      } else {
        return 0;
      }
    } else if (coord->x == 0 && coord->y == 1) {
      if (coord->Direction == 'N') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100
            + coord->y * 10;
        return chord;       //at basement at 0,1 coord facing noeth value= 10010
      } else if (coord->Direction == 'S') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 1;
        return chord;       //at basement at 0,1 coord facing south value= 10011
      } else if (coord->Direction == 'E') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 2;
        return chord;        //at basement at 0,1 coord facing east value= 10012
      } else if (coord->Direction == 'W') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 3;
        return chord;        //at basement at 0,1 coord facing west value= 10013
      } else {
        return 0;
      }
    } else if (coord->x == 0 && coord->y == 2) {
      if (coord->Direction == 'N') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100
            + coord->y * 10;
        return chord;       //at basement at 0,2 coord facing noeth value= 10020
      } else if (coord->Direction == 'S') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 1;
        return chord;       //at basement at 0,2 coord facing south value= 10021
      } else if (coord->Direction == 'E') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 2;
        return chord;        //at basement at 0,2 coord facing east value= 10022
      } else if (coord->Direction == 'W') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 3;
        return chord;        //at basement at 0,2 coord facing west value= 10023
      } else {
        return 0;
      }
    } else if (coord->x == 1 && coord->y == 0) {
      if (coord->Direction == 'N') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100
            + coord->y * 10;
        return chord;       //at basement at 1,0 coord facing noeth value= 10100
      } else if (coord->Direction == 'S') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 1;
        return chord;       //at basement at 1,0 coord facing south value= 10101
      } else if (coord->Direction == 'E') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 2;
        return chord;         //at basement at 1,0coord facing east value= 10102
      } else if (coord->Direction == 'W') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 3;
        return chord;        //at basement at 1,0 coord facing west value= 10103
      } else {
        return 0;
      }
    } else if (coord->x == 1 && coord->y == 1) {
      if (coord->Direction == 'N') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100
            + coord->y * 10;
        return chord;       //at basement at 1,1 coord facing noeth value= 10110
      } else if (coord->Direction == 'S') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 1;
        return chord;       //at basement at 1,1 coord facing south value= 10111
      } else if (coord->Direction == 'E') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 2;
        return chord;         //at basement at 1,1coord facing east value= 10112
      } else if (coord->Direction == 'W') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 3;
        return chord;        //at basement at 1,1 coord facing west value= 10113
      } else {
        return 0;
      }
    } else if (coord->x == 1 && coord->y == 2) {
      if (coord->Direction == 'N') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100
            + coord->y * 10;
        std::cout << " from operation" << chord << "             ";
        return chord;       //at basement at 1,2 coord facing noeth value= 10120
      } else if (coord->Direction == 'S') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 1;
        std::cout << " operation" << chord << "             ";
        return chord;       //at basement at 1,2 coord facing south value= 10121
      } else if (coord->Direction == 'E') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 2;
        std::cout << " operation" << chord << "             ";
        return chord;        //at basement at 1,2 coord facing east value= 10122
      } else if (coord->Direction == 'W') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 3;
        std::cout << " operation" << chord << "             ";
        return chord;        //at basement at 1,2 coord facing west value= 10123
      } else {
        return 0;
      }
    } else if (coord->x == 2 && coord->y == 0) {
      if (coord->Direction == 'N') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100
            + coord->y * 10;
        return chord;       //at basement at 2,0 coord facing noeth value= 10200
      } else if (coord->Direction == 'S') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 1;
        return chord;       //at basement at 2,0 coord facing south value= 10201
      } else if (coord->Direction == 'E') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 2;
        return chord;        //at basement at 2,0 coord facing east value= 10202
      } else if (coord->Direction == 'W') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 3;
        return chord;        //at basement at 2,0 coord facing west value= 10203
      } else {
        return 0;
      }
    } else if (coord->x == 2 && coord->y == 1) {
      if (coord->Direction == 'N') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100
            + coord->y * 10;
        return chord;       //at basement at 2,1 coord facing noeth value= 10210
      } else if (coord->Direction == 'S') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 1;
        return chord;       //at basement at 2,1 coord facing south value= 10211
      } else if (coord->Direction == 'E') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 2;
        return chord;        //at basement at 2,1 coord facing east value= 10212
      } else if (coord->Direction == 'W') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 3;
        return chord;        //at basement at 2,1 coord facing west value= 10213
      } else {
        return 0;
      }
    } else if (coord->x == 2 && coord->y == 2) {
      if (coord->Direction == 'N') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100
            + coord->y * 10;
        return chord;       //at basement at 2,2 coord facing noeth value= 10220
      } else if (coord->Direction == 'S') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 1;
        return chord;       //at basement at 2,2 coord facing south value= 10221
      } else if (coord->Direction == 'E') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 2;
        return chord;        //at basement at 2,2 coord facing east value= 10222
      } else if (coord->Direction == 'W') {
        int chord = 10000 + coord->floor * 1000 + coord->x * 100 + coord->y * 10
            + 3;
        return chord;        //at basement at 2,2 coord facing west value= 10223
      } else {
        return 0;
      }
    } else {
      return 0;
    }
  } else {
    return 0;
  }
}

Operations::~Operations() {
}

