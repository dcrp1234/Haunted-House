/**
 * @author Prottasha D'cruze <dcruze@uleth.ca>
 * @date 2022-12-03, 2022-10-03
 */

#include <string>
#include <vector>
#include <iostream>
#include "Action.h"
#include "Description.h"
#include "Objects.h"
#include "MenuGUI.h"

void Action::inspect(Coordinate *c) {
  //if object == torch only then t->use shows all
  Description d;
  // Torch *t = new Torch(c);
  d.getDescription(c, "");
}
void Action::lookAround(Coordinate *c) {
  Description d;
  d.getDisplay(c);
}

void Action::help() {
  std::cout << "\n\t[     Forward    ] Moves front, can also be done "
      "using w, north\n"
      "\t[    Backward    ] Moves back and turns around, can "
      "also be done using s, south\n"
      "\t[      left      ] Moves to your left turns left, "
      "can also be done using a, west \n"
      "\t[      right     ] Moves to your right turns right,"
      " can also be done using d, east \n"
      "\t[manage inventory] Opens up your inventory \n"
      "\t[     inspect    ] tells you what's nearby, can "
      "also be done using i, insp \n"
      "\t[   go upstairs  ] if near stairs goes upstairs, "
      "can also be done using up, go up, upstairs \n"
      "\t[  go downstairs ] if near stairs goes downstairs,"
      " can also be done using down, go down, downstairs \n"
      "\t[  pickup object ] if near an object, can also be "
      "done using pick, pickup, pick object \n"
      "\t[    enterdoor   ] To enter any door \n"
      "\t[      exit      ] to exit game at any point \n\n\n";
}

void Action::discussBase() {
  std::string dialogueloop, word;
  int f = 0;
  std::vector < std::string > wordsinline;
  std::cout << "We are trapped here!\n";
  while (true) {
    getline(std::cin, dialogueloop);
    dialogueloop = MenuGUI::toUpper(dialogueloop) + " ";
    if (dialogueloop == " ") {
      break;
    } else {
      wordsinline.clear();
      for (int i = 0; i < dialogueloop.length(); i++) {
        if (dialogueloop[i] != ' ' && dialogueloop[i] != '?') {
          word = word + dialogueloop[i];
        } else {
          wordsinline.push_back(word);
          word = "";
        }
      }
      for (int i = 0; i < wordsinline.size(); i++) {
        if (wordsinline[i] == "WHAT" || wordsinline[i] == "HOW") {
          std::cout << "Lets got inside the house.\nWe might find"
              "something to escape with.\n";
        } else if (wordsinline[i] == "SCARED" || wordsinline[i] == "AFRAID"
            || wordsinline[i] == "YES") {
          std::cout << "I am scared too.\n";
        } else if (wordsinline[i] == "DOOR" || wordsinline[i] == "OUT") {
          std::cout << " We should spread out and check this place!. \n";
        } else if (wordsinline[i] == "WHERE") {
          std::cout << " Looks like the basement of some sort. \n";
        } else if (wordsinline[i] == "OK") {
          break;
        } else if (wordsinline[i] == "KEY" || wordsinline[i] == "LOCKED") {
          std::cout << " Since its a basement there must be "
              "something inside this storage. \n"
              "We must find the key!\n";
        } else if (wordsinline[i] == "EXIT" && wordsinline.size() == 1) {
          std::cout << "The only way to exit now will be to die.\n"
              "Do you want to die?\n";
          getline(std::cin, word);
          word = MenuGUI::toUpper(word);
          if (word == "DIE" || word == "YES") {
            std::cout << "+++++++++++++++++++++++++++++++++++++++++"
                "+++++++++++++++++++++++++++++++++++++++++++\n";
            std::cout << "You willingly offered your soul to the "
                "one possessing the house!\n";
            std::cout << "++++++++++++++++++++++++++++++++++++++++++"
                "++++++++++++++++++++++++++++++++++++++++++\n";
            exit(0);
          } else {
            break;
          }
        }
      }
      if (f == 0) {
        std::cout << " Lets go inside and look for"
            "something to escape with.\n";
        f = 1;
      }
    }
  }
}

void Action::discussAttic(Coordinate *c) {
  std::string dialogueloop, word;
  int f = 0;
  std::vector < std::string > wordsinline;
  std::cout << "Careful! This place is unusually dark.\n";
  while (true) {
    getline(std::cin, dialogueloop);
    dialogueloop = MenuGUI::toUpper(dialogueloop) + " ";
    if (dialogueloop == " ") {
      break;
    } else {
      wordsinline.clear();
      for (int i = 0; i < dialogueloop.length(); i++) {
        if (dialogueloop[i] != ' ' && dialogueloop[i] != '?') {
          word = word + dialogueloop[i];
        } else {
          wordsinline.push_back(word);
          word = "";
        }
      }
      for (int i = 0; i < wordsinline.size(); i++) {
        if ((wordsinline[i] == "WHAT" || wordsinline[i] == "HOW")
            && c->y == 1) {
          std::cout << "Lets get the key and escape.\n";
        } else if (wordsinline[i] == "SCARED" || wordsinline[i] == "AFRAID") {
          std::cout << "I am scared too.\n";
        } else if (wordsinline[i] == "WHERE") {
          std::cout << " Looks like the attic of the house. \n";
        } else if (wordsinline[i] == "OK") {
          break;
        } else if (wordsinline[i] == "KEY" || wordsinline[i] == "KEY") {
          std::cout << " Since its a key it can be used somewhere.\n";
        } else {
          break;
        }
      }
      if (f == 0) {
        std::cout << " Lets go downstairs, staying too long is scary.\n";
        f = 1;
      }
    }
  }
}

