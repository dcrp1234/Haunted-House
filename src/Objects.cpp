/**
 * @author CS Suryadevara <chandrashekar.suryad@uleth.ca>
 * @date 2022-11-10, 2022-10-03
 */

#include <iostream>
#include <vector>
#include <fstream>
#include <string>

#include "Objects.h"
#include "Character.h"
#include "MenuGUI.h"

void Objects::ADD(Coordinate *c, std::string ob) {
  // std::cout << "inside add";
  int coord = 9000 + c->floor * 100 + c->x * 10 + c->y;
  if (coord == 9112 || coord == 9201 || coord == 9002 || coord == 9110) {
    if (coord == 9112) {
      if (ob == "KEY $" || ob == "$" && masskey_pick == false) {
        masskey_pick = true;
        Player->addToInventory("MASSKEY");
        std::cout << "Key picked.\n";
      } else {
        std::cout << "No key found, you already picked it up.\n";
      }
    } else if (coord == 9201) {
      if (ob == "KEY $"
          || ob == "$" && basskey_pick == false && pass == "DEATHNOTE") {
        basskey_pick = true;
        Player->addToInventory("BASSKEY");
        std::cout << "Key picked.\n";
      } else {
        std::cout << "No key found, you already picked it up.\n";
      }
    } else if (coord == 9002) {
      if (ob == "MAP $" || ob == "$" && map_pick == false) {
        map_pick = true;
        Player->addToInventory("MAP");
        std::cout << "Map picked.\n";
      } else {
        std::cout << "No map found, you already picked it up.\n";
      }
    } else if (coord == 9110) {
      if (ob == "AXE $" || ob == "$" && axe_pick == false) {
        axe_pick = true;
        Player->addToInventory("AXE");
        std::cout << "Axe picked.\n";
      } else {
        std::cout << "No axe found, you already picked it up.\n";
      }
    } else {
      std::cout << "No such item in inventory.\n";
    }
    /*
     else if(coord == 9201 && basskey_pick == false) {
     if (ob =="KEY $" || ob == "$"){
     basskey_pick = true;
     Player->addToInventory("BASSKEY");
     }

     }

     /*      //KEY CONDITIONS*/
    /*     else if(ob == "MAP $"|| ob == "$"){
     if(coord == 9002 && map_pick == false) {
     std::cout<<"Adding map";
     >>>>>>> 4e2344a3be44a943713a373ec9f032bca0e24290
     map_pick = true;
     Player->addToInventory("MAP");
     } else {
     std::cout << "No map found, you already picked it up.\n";
     }
     } else if (ob == "AXE $" || ob == "$") {

     if (coord == 9101 && axe_pick == false) {
     axe_pick = true;
     Player->addToInventory("AXE");
     } else {
     std::cout << "No axe found, you already picked it up.\n";
     }
     } else {
     std::cout << "No such object.\n";
     }
     } else {
     std::cout << "No object at your position.\n";
     }
     */
  } else {
    std::cout << "Nothing to pick nearby.\n";
  }
}

void Objects::use(std::string object, Coordinate *c) {
  if (object == "MAP") {
    if (Player->searchInventory(object) == true) {
      if (c->floor == 0) {
        std::string imageLines = "";
        std::ifstream inputFile;
        std::string fileName = "BASEMENT.txt";

        inputFile.open(fileName.c_str());

        if (inputFile) {
          while (inputFile) {
            std::string temp;
            getline(inputFile, temp);
            temp += "\n";
            imageLines += temp;
          }
          std::cout << imageLines << std::endl;
          inputFile.close();
        } else {
          std::cout << "ERROR: Image file wasn't found..." << std::endl;
        }
      } else if (c->floor == 1) {
        std::string imageLines = "";
        std::ifstream inputFile;
        std::string fileName = "FLOOR.txt";

        inputFile.open(fileName.c_str());

        if (inputFile) {
          while (inputFile) {
            std::string temp;
            getline(inputFile, temp);
            temp += "\n";
            imageLines += temp;
          }
          std::cout << imageLines << std::endl;

          inputFile.close();
        } else {
          std::cout << "ERROR: Image file wasn't found..." << std::endl;
        }
      }
    } else {
      std::cout << "No map in inventory.\n";
    }
  } else {
    std::cout << " Object not recognized.\n";
  }
}

void Objects::useDollFunction() {
  std::string dialogueloop, word;
  std::vector < std::string > wordsinline;
  std::cout << "Are you lost?\n";
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
        if (wordsinline[i] == "TALK") {
          std::cout << "That I can't say, it is possibly from all "
              "the souls of human children I devoured.\n";
        } else if (wordsinline[i] == "WHERE") {
          std::cout << "In the room where I cradled the child of the house"
              " every night till the one in the attic killed her.\n";
        } else if (wordsinline[i] == "END" || wordsinline[i] == "EXIT"
            || wordsinline[i] == "GO") {
          std::cout
              << " I will tell you how to escape if you touch my face. \n";
        } else if (wordsinline[i] == "NO") {
          std::cout << " COME CLOSER!. \n";
        } else if (wordsinline[i] == "TOUCH" || wordsinline[i] == "HOLD"
            || wordsinline[i] == "PLAY") {
          std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++"
              "+++++++++++++++++++++++++++++\n\n";
          std::cout
              << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
                  "XXXXXXXXXXXXXX\n"
                  "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
                  "XXXXXXXXXXXXXXX\n"
                  "!XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
                  "XXXXXXXXXXXXXXX\n"
                  "XXXXXXXXXXXXXXXXXXXf~~~VXXXXXXXXXXXXXXXXXXXXXXXXXXvvvvvvvv"
                  "XXX"
                  "XXXXXXXXXXX!\n"
                  "!XXXXXXXXXXXXXXXf`       XXXXXXXXXXXXXXXXXXXXXf`          "
                  "~XXXXXXXXXXP\n"
                  "vXXXXXXXXXXXX!            !XXXXXXXXXXXXXXXXXX!            "
                  "!XXXXXXXXX\n"
                  "XXXXXXXXXXv`              VXXXXXXXXXXXXXXX                "
                  "!XXXXXXXX!\n"
                  "!XXXXXXXXX.                 YXXXXXXXXXXXXX!               "
                  "XXXXXXXXX\n"
                  "XXXXXXXXX!                 ,XXXXXXXXXXXXXX                "
                  "VXXXXXXX!\n"
                  "XXXXXXXX!                ,!XXXX ~~XXXXXXX               iXX"
                  "XXXX~\n"
                  "XXXXXXXX               ,XXXXXX   XXXXXXXX!             xXX"
                  "XXXX!\n"
                  "!XXXXXXX!xxxxxxs______xXXXXXXX   YXXXXXX!          ,xXXXXXX"
                  "XX\n"
                  "YXXXXXXXXXXXXXXXXXXXXXXXXXXX`    VXXXXXXX!s. __gxx!XXXXXXX"
                  "XXP\n"
                  "XXXXXXXXXXXXXXXXXXXXXXXXXX!      XXXXXXXXXXXXXXXXXXXXXXXX"
                  "X!\n"
                  "XXXXXXXXXXXXXXXXXXXXXXXXXP        YXXXXXXXXXXXXXXXXXXXXX"
                  "XX!\n"
                  "XXXXXXXXXXXXXXXXXXXXXXXX!     i    !XXXXXXXXXXXXXXXXXXXXX"
                  "XXX\n"
                  "XXXXXXXXXXXXXXXXXXXXXXXX!     XX   !XXXXXXXXXXXXXXXXXXXXX"
                  "XXX\n"
                  "XXXXXXXXXXXXXXXXXXXXXXXXx_   iXX_,_dXXXXXXXXXXXXXXXXXXXXX"
                  "XXX\n"
                  "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
                  "XXP\n"
                  "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
                  "XXX!\n"
                  "~vXvvvvXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
                  "XXf\n"
                  "VXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXvvvvvv~\n"
                  " XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX~\n"
                  "_    XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXv`\n"
                  "-XX!  !XXXXXXX~XXXXXXXXXXXXXXXXXXXXXX~   Xxi\n"
                  "YXX  ~ XXXXX XXXXXXXXXXXXXXXXXXXX`     iXX`\n"
                  "!XX!    !XXX` XXXXXXXXXXXXXXXXXXXX      !XX\n"
                  "!XXX    ~Vf  YXXXXXXXXXXXXXP YXXX     !XXX\n"
                  "!XXX  ,_      !XXP YXXXfXXXX!  XXX     XXXV\n"
                  "!XXX !XX           XXP YXX!       ,.!XXX!\n"
                  "!XXXi!XP  XX.                  ,_  !XXXXXX!\n"
                  "iXXXx X!  XX! !Xx.  ,.     xs.,XXi !XXXXXXf\n"
                  "XXXXXXXXXXXXXXXXX! _!XXx  dXXXXXXX.iXXXXXX\n"
                  "VXXXXXXXXXXXXXXXXXXXXXXXxxXXXXXXXXXXXXXXX!\n"
                  "YXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXV\n"
                  "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX!\n"
                  "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXf\n"
                  "  VXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXf\n"
                  "    VXXXXXXXXXXXXXXXXXXXXXXXXXXXXv`\n"
                  "     ~vXXXXXXXXXXXXXXXXXXXXXXXf`\n"
                  "         ~vXXXXXXXXXXXXXXXXv~\n"
                  "            ~VvXXXXXXXV~~\n"
                  "                  ~~\n";

          std::cout << "++++++++++++++++++++++++++++++++++++++++++++++++++"
              "++++++++++++++++++++++++++++++++++\n";
          std::cout << " Your soul got devoured by the doll and "
              "trapped in it for eternity!\n";
          exit(0);
        }
      }
      std::cout
          << " Come closer don't you want to hold me and play with me?. \n";
    }  // till there is input
  }  //while closed
}
