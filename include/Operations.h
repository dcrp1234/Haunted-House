/*
 * Operations.h
 *
 *  Created on: Dec. 5, 2022
 *      Author: tanjero-kamado
 */

#ifndef INCLUDE_OPERATIONS_H_
#define INCLUDE_OPERATIONS_H_
#include "Coordinate.h"

/**
 * @class Operations Operations.h "Operations.h"
 * @brief A class to change a coordinate into integer
 */
class Operations {
 public:
  /**
   * @brief Default constructor
   */
  Operations() {
  }
  /**
   * @brief A method to change the coordinate into an integer
   */
  int Logic_Operation(Coordinate *coord);
  /**
   * @brief Destructor
   */
  ~Operations();
};

#endif /* INCLUDE_OPERATIONS_H_ */
