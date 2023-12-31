#include <stdio.h>
#include <iostream>
#include <string>
#include <cctype>
#include <vector>

#include "Movement.h"
#include "MenuGUI.h"
#include "Coordinate.h"
#include "Description.h"
#include "Action.h"
#include "Operations.h"
#include "Objects.h"
#include "Character.h"
#include "SpaceType.h"
#include "Room.h"

void MenuGUI::Print_Options(int map) {
  std::vector<int> Similar_Options = { 10010, 10011, 10012, 10013, 10000, 10001,
      10002, 10003, 10120, 10121, 10122, 10123, 10210, 10211, 10212, 10213,
      11010, 11011, 11012, 11013, 11110, 11111, 11112, 11113, 11210, 11211,
      11212, 11213, 11220, 11221, 11222, 11223 };
  for (int i = 0; i < Similar_Options.size(); i++) {
    if (Similar_Options[i] == map) {
      std::cout << "\n                       [w]Forward" << std::endl
          << "       [a]Left         [s]Backward       [d]Right   " << "\n"
              "    [I]Inspect-------[M]ManageInventory------[E]Exit";
      std::cout << std::endl;
      break;
    }
  }
  if (map == 12010 || map == 12011 || map == 12012 || map == 12013) {
    std::cout << "There is a chest box in here. I guess "
        "you need to enter pass for it "
        "\n[PASS] TO INPUT PASSWORD-------"
        "[I]Inspect--------[M]ManageInventory " << std::endl;
  }
  if (map == 10220 || map == 10221 || map == 10222 || map == 10223
      || map == 11200 || map == 11201 || map == 11202 || map == 11203
      || map == 12000 || map == 12001) {
    std::cout << "\n   [UP]GoUpStairs         [w]Forward   "
        "      [DOWN]GoDownStairs" << std::endl
        << "          [a]Left         [s]Backward        [d]Right   "
            "\n"
            "    [I]Inspect-------[M]ManageInventory------[E]Exit" << std::endl;

    /*"[w]Forward------[s]Backward-------[a]Left-------[d]Right-------"
     "[I]Inspect---------[UP] GoUpStairs-------[DOWN] GoDownStairs-------"
     "[M]ManageInventory-----[E]Exit" << std::endl;*/
  }
  if (map == 10020 || map == 10021 || map == 10022 || map == 10023
      || map == 11120 || map == 11121 || map == 11122 || map == 11123
      || map == 12010 || map == 12011 || map == 10200 || map == 10201
      || map == 10202 || map == 10203) {
    std::cout << "\n                               [w]Forward" << std::endl
        << "               [a]Left         [s]Backward       [d]Right   "
            "\n"
            "[PICK]PICKUP OBJECT-------[I]Inspect----"
            "---[M]ManageInventory------[E]Exit";
    std::cout << std::endl;
  }
  if (map == 11020 || map == 11021 || map == 11022 || map == 11023) {
    std::cout << "\n                            [w]Forward" << std::endl
        << "            [a]Left         [s]Backward       [d]Right   " << "\n"
            "[ENTER]ENTERDOOR-------[I]Inspect----"
            "---[M]ManageInventory------[E]Exit";
    std::cout << std::endl;
  }
}

void MenuGUI::MENU(std::string PlayerName) {
  Coordinate c;
  Description D;
  Movement M;
  Operations OP;
  Character C;
  Objects O(&C);
  std::string choice;
  Room R(&c);
  SpaceType *rooms1;
  std::cout << "\nFor help, enter help! \nYou might want to "
      "discuss with your friends before you venture further.\n\n\n";
  std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++"
      "+++++++++++++++++++++++++++++\n\n";

  label: D.getDescription(&c, "");
  label2: std::cout << "\nWhere do you want to go now " << PlayerName << " ?"
      << std::endl;
  rooms1 = R.createRoom();
  Print_Options(OP.Logic_Operation(&c));
  std::cout << "Input: ";
  getline(std::cin, choice);
  choice = toUpper(choice);
  std::cout << "\n\n";
  std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++"
      "+++++++++++++++++++++++++++++\n\n";
  //-----------for movement-------------------
  if (choice == "W" || choice == "S" || choice == "A" || choice == "D"
      || choice == "FORWARD" || choice == "BACKWARD" || choice == "LEFT"
      || choice == "RIGHT" || choice == "NORTH" || choice == "SOUTH"
      || choice == "EAST" || choice == "WEST") {
    if (choice == "FORWARD" || choice == "W" || choice == "NORTH") {
      M.forward(&c, OP.Logic_Operation(&c), &C);
      goto label;
    } else if (choice == "BACKWARD" || choice == "S" || choice == "SOUTH") {
      M.backward(&c, OP.Logic_Operation(&c), &C);
      goto label;
    } else if (choice == "EAST" || choice == "D" || choice == "RIGHT") {
      M.right(&c, OP.Logic_Operation(&c), &C);
      goto label;
    } else {
      M.left(&c, OP.Logic_Operation(&c), &C);
      goto label;
    }
  } else if (choice == "ENTER" || choice == "INSIDE") {
    rooms1->hint();
    goto label2;
    //-------------------for inspect----------------------
  } else if (choice == "INSPECT" || choice == "INSP" || choice == "I") {
    Action::inspect(&c);
    goto label2;
  } else if (choice == "PASS" || choice == "PASSWORD"
      || choice == "PASS WORD") {
    if (OP.Logic_Operation(&c) == 12010 || OP.Logic_Operation(&c) == 12011) {
      int gap = 0;
      while (gap == 0) {
        std::cout << "\nPLEASE ENTER THE PASSWORD BELOW " << std::endl;
        std::string pass;
        getline(std::cin, pass);
        pass = toUpper(pass);
        if (pass == "BACK") {
          gap = 1;
          goto label2;
        }
        if (pass.find("DEATHNOTE") || pass.find("DEATH NOTE")) {
          O.pass = "DEATHNOTE";
          O.ADD(&c, "KEY $");
          gap = 1;
        } else {
          std::cout
              << "Lets try again, if you want to exit input back or exit.\n";
        }
      }
      goto label2;
    }
  } else if (choice == "LOOK" || choice == "LOOK AROUND") {
    Action::lookAround(&c);
    goto label2;
    //-----------------for changing floors-------------------
  } else if (choice == "UPSTAIRS" || choice == "UP" || choice == "GO UP"
      || choice == " GO UPSTAIRS") {
    M.GoUpstairs(&c);
    goto label;
    //-----------------for changing floors-------------------
  } else if (choice == "DOWNSTAIRS" || choice == " GO DOWN" || choice == "DOWN"
      || choice == " GO DOWNSTAIRS") {
    M.GoDownstairs(&c);
    goto label;
  } else if (choice == "M" || choice == "MANAGEINVENTORY"
      || choice == "INVENTORY" || choice == "MANAGE INVENTORY") {
    C.Display();
    label3: std::cout << "[B]BACK------[DROP<space>ITEM]DROP ITEM-------"
        "[USE<space>ITEM]USE ITEM-------[E]Exit " << std::endl;
    std::string selection, item;
    getline(std::cin, selection);
    selection = toUpper(selection);
    if (selection == "M" || selection == "MENU" || selection == "B"
        || selection == "BACK") {
      goto label2;
    } else if (selection == "DROP ITEM" || selection == "DROP") {
      item = MenuGUI::toUpper(item);
      C.removeFromInventory(item);
      std::cout << "Dropped.\n";
      goto label3;
    } else if (selection == "E" || selection == "EXIT") {
      std::cout << "Sad to see you go...\n";
      exit(0);
    } else if (selection == "USE" || selection == "USE ITEM") {
      std::cout << "What do you want to use?\n";
      getline(std::cin, item);
      item = MenuGUI::toUpper(item);
      O.use(item, &c);
    } else if (selection == "USE MAP") {
      O.use("MAP", &c);
      goto label3;
    } else {
      std::cout << " Can't do that option.\n";
    }
    goto label3;
    //--------------------for exiting---------------------
  } else if (choice == "EXIT") {
    std::cout << "Sad to see you go...\n";
    exit(0);
    //----------------for picking objects-----------------
  } else if (choice.substr(0, choice.find(" ")) == "PICK"
      || choice.substr(0, choice.find(" ")) == "PICKUP") {
    choice = choice + " $";
    //std::cout << choice;
    std::string object = choice.substr(choice.find(" ") + 1, choice.length());
    // std::cout << "\n" << object;
    if (object == "OBJECT $") {
      object = "$";
    }
    O.ADD(&c, object);
    goto label2;
    //----------------using object----------------------
  } else if (choice.substr(0, choice.find(" ")) == "USE") {
    std::cout << choice;
    std::string object = choice.substr(choice.find(" ") + 1, choice.length());
    O.use(object, &c);
    goto label2;

  } else if (choice == "TALK" || choice == "DISCUSS") {
    int coord = 9000 + c.floor * 100 + c.x * 10 + c.y;
    if (coord == 9110 && choice == "TALK") {
      O.useDollFunction();
    } else if (c.floor == 0) {
      Action::discussBase();
    } else if (c.floor == 2) {
      Action::discussAttic(&c);
    } else {
      std::cout << "Nothing to interact with.\n";
    }
    goto label2;
  } else if (choice == "HELP") {
    Action::help();
    goto label2;
  } else {
    std::cout << "Sorry I don't understand you " << PlayerName << ".\n";
    goto label2;
  }
}

std::string MenuGUI::toUpper(std::string choice) {
  std::string str = "";
  for (int i = 0; i < choice.length(); i++) {
    str.push_back(toupper(choice[i]));
  }
  return str;
}

