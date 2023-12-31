/**
 * @author CS Suryadevara <chandrashekar.suryad@uleth.ca>
 * @date 2022-11-10, 2022-10-03
 */
#include <stdio.h>
#include <iostream>
#include <string>

#include "../../include/Character.h"
#include "HauntedHouse.h"
//#include "Basement.h"
//#include "Coordinate.h"
//#include "Movement.h"
#include "MenuGUI.h"

int main() {
  std::string loop;
  HauntedHouse H;
  H.TellStory();
  while (true) {
    std::cout << "Input 'start' to start the game or Input 'exit' to exit "
        << std::endl;
    // std::cin >> loop;
    getline(std::cin, loop);
    loop = MenuGUI::toUpper(loop);
    if (loop == "EXIT") {
      break;
    }
    if (loop == "START") {
      Character Player;
      Player.setName();
      MenuGUI::MENU(Player.getName());
    }
  }

  return 0;
}

