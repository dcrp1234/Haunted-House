#ifndef MENUGUI_H_INCLUDED
#define MENUGUI_H_INCLUDED

#include <string>

/**
 * @class MenuGUI MenuGUI.h "MenuGUI.h"
 * @brief A class which checks the user input and if the action is appropriate
 */
class MenuGUI {
 public:
  /**
   * @brief A method to display the menu/options in UI
   */
  static void MENU(std::string);
  /**
   * @brief A method to change user input to upper case
   */
  static std::string toUpper(std::string);
  /**
   * @brief A method to print options for user like right, left, etc
   * @param[in] map coordinate represented as int
   */
  static void Print_Options(int map);
};
#endif // MENUGUI_H_INCLUDED

