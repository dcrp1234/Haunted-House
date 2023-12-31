/**
 * @author Prottasha D'cruze <dcruze@uleth.ca>
 * @date 2022-12-01, 2022-10-03
 */

#ifndef ACTION_H
#define ACTION_H

#include "Coordinate.h"
#include "Objects.h"

/**
 * @class Action Action.h "Action.h"
 * @brief Helps user to do different types of actions
 */
class Action {
 public:
  /**
   * @brief Allows users to inspect a room or an object
   */
  static void inspect(Coordinate *c);
  /**
   * @brief Allows user to move around a room
   * @param[in] Coordinate you are at
   */
  static void lookAround(Coordinate *c);
  /**
   * @brief Allows users to interact with the environment and the objects
   *@param[in] Coordinate you are at
   */
  static void interact();
  /**
   * @brief This function is to interact with other side characters in basement
   */
  static void discussBase();
  /**
   * @brief This function is to interact with other side characters in attic
   */
  static void discussAttic(Coordinate* c);
  /**
   * @brief A function for the user to ask for help
   */
  static void help();
};
#endif
