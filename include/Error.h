/**
 * @author CS Suryadevara <chandrashekar.suryad@uleth.ca>
 * @date 2022-11-10, 2022-10-03
 */

#ifndef ERROR_H_INCLUDED
#define ERROR_H_INCLUDED

/**
 * @class Error Error.h "Error.h"
 * @brief This class gives an error if the user enters an value other than what is expected
 */
class Error {
 public:
  /**
   * @brief Default constructor
   */
  Error();

  /**
   * @brief Restricts the user to go any further and lets them know that there is a wall in the front
   */
  void wall_error();

  /**
   * @brief Restricts the user to do an operation which is not allowed.
   */
  void cant();

  /**
   * @brief Restricts the user to use a key which is not allowed.
   */
  void wrong_key();
};

#endif // ERROR_H_INCLUDED
