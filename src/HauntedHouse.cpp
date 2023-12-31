/**
 * @author CS Suryadevara <chandrashekar.suryad@uleth.ca>
 * @date 2022-11-10, 2022-10-03
 */
#include <unistd.h>
#include <iostream>
#include "HauntedHouse.h"

HauntedHouse::HauntedHouse() {
  floor = 0;
}
void HauntedHouse::TellStory() {
  std::cout << "++++++++++++++++++++++++++++++++++++++++"
      "++++++++++++++++++++++++++++++++++++++++++++\n";
  std::cout << "\n\tYou and your three other friends "
      "are playing volleyball.\n\n ";
  sleep(2);
  std::cout << "\tYour friend, hits the ball in "
      "the backyard of an old house.\n";

  sleep(2);
  std::cout << "All of you enter the compound looking "
      "for your ball but it was nowhere in sight.\n\n";
  sleep(2);
  std::cout << "Suddenly you fell the ground giving "
      "out under you! \nIt was all darkness after that.\n\n";

  sleep(2);
  std::cout << "\tAfter recovering from the fall, you realize "
      "that you are in an old basement,\n";
  sleep(1);
  std::cout << "you could not make out much from "
      "the sparse light coming from the pit hole,\n"
      "unusually high above you.\n\n";

  sleep(4);
  std::cout << "\tYou finally realize you are trapped "
      "and there is nowhere out\n"
      "but to go further into the house "
      "to look for an exit.\n\n";
  std::cout << "++++++++++++++++++++++++++++++++++++++++++++"
      "++++++++++++++++++++++++++++++++++++++++\n\n";
  sleep(3);
}

