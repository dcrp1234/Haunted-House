/**
 * @author Disha Patel <disha.patel@uleth.ca>
 * @date 2022-11-10, 2022-10-03
 */

#ifndef DESCRIPTION_H_INCLUDED
#define DESCRIPTION_H_INCLUDED

#include <iostream>
#include <map>
#include <string>

#include "Coordinate.h"

/**
 * @class Description Description.h "Description.h"
 * @brief A class which gives description to the user at their every step.
 */
class Description {
 public:
  /**
   * @brief Default constructor
   */
  Description() {
  }
  /**
   * @brief Destructor
   */
  ~Description() {
  }
  /**
   * @brief Provides direction to the user
   * @param[in] coordinate you are at
   */
  void getDisplay(Coordinate *c);
  /**
   * @brief gets the description
   */
  void getDescription(Coordinate *c, std::string);
  /**
   * @brief Gives description to the user
   */
  void setmap() {
    // Basement Description
    storageOfDescriptions[9000] = "[  000  ]\nThis is the starting point, "
        "where you fell down from the pit.\n";
    storageOfDescriptions[9001] =
        "[  001  ]\nMoving forward, you see few broken "
            "glass pieces on ground.\n";
    storageOfDescriptions[9002] =
        "[  002  ]\nFurther,in the corner you see a Map.\n"
            "Do yo want to pick the Map?\n";
    storageOfDescriptions[9012] =
        "[  012  ]\nNow, you see a faded painting on wall which\n"
            "appears to be made by a child.\n";
    storageOfDescriptions[9011] =
        "[  011  ]\nThere is a cat skeleton scattered on the ground.\n";
    storageOfDescriptions[9010] =
        "[  010  ]\nThere is a storage that seems to be locked.\n";
    storageOfDescriptions[9020] = "[  020  ]\nIt's dark. Nothing in sight.\n";
    storageOfDescriptions[9021] = "[  021  ]\nYou see few vintage furniture.\n";
    storageOfDescriptions[9022] =
        "[  022  ]Stairs. Which are going to the upper level.\n";

    //First floor description
    storageOfDescriptions[9100] =
        "[  100  ]\nYou have entered the master bedroom.\n"
            "The first thing you see is a man's body "
            "hanging from the ceiling.\n"
            "The room was scattered with all"
            " the furniture in the room.\n";
    storageOfDescriptions[9101] = "[  101  ]\nMoving in the hallway, there "
        "is a door on either side\n"
        "and the library door is open.\n";
    storageOfDescriptions[9102] =
        "[  102  ]\nYou entered the library. The door "
            "gets closed behind you and suddenly\n"
            "a high speed wind started coming strangely "
            "from the door direction and\n"
            "pushing you towards the balconywith no "
            "flowers at all..\n";
    storageOfDescriptions[9110] = "[  110  ]\nThis is the child's room, you see"
        " a child's dead body and\n"
        "beside it is a doll in a sitting position. "
        "The doll looks like it can\n"
        "speak to you with such real expressions.\n";
    storageOfDescriptions[9111] =
        "[  111  ]\nYou are in a hallway. The wall is filled with\n"
            "collage of photo frames and on your left is a door with\n"
            "super hero stickers but it seems to be locked.\n";
    storageOfDescriptions[9112] =
        "[  112  ]\nNow, you enter the bathroom and see blood\n"
            "and scratches all over the walls.\n"
            "The bathtub was closed by a blood covered curtains.\n";
    storageOfDescriptions[9120] = "[  120  ]\nYou are at the end of the stairs "
        "and reached one level up.";
    storageOfDescriptions[9121] = "[  121  ]\nThere is a worn sofa with"
        " a coffee table in front\n"
        "of the sofa. At your left you see a "
        "hall with dim light\n"
        "and in your front there is a television "
        "with broken screen.\n";
    storageOfDescriptions[9122] = "[  122  ]\nYou see a T.V. on a table and "
        "two flower vases\n"
        "on each side of the T.V.\n";

    //Attic description
    storageOfDescriptions[9200] = "[  200  ] \nEnd of stairs. You have "
        "reached the top floor of the house i.e.\n"
        "the attic and everything in your surrounding is really dark,\n"
        "there is nothing in your sight.\n";
    storageOfDescriptions[9201] =
        "[  201  ] \nAs you move forward, strange voices "
            "started coming from a short\n"
            "distance.\n You stepped on a key!\n"
            "Do you want to pick the key?\n";
    storageOfDescriptions[9202] =
        "[  202  ] \nYou take one more step forward.\n"
            "Wrong decision:|\n"
            "Something or someone pulls you in and you die.\n";
    storageOfDescriptions[9210] = "";
    storageOfDescriptions[9211] = "";
    storageOfDescriptions[9212] = "";
  }

 private:
  std::map<int, std::string> storageOfDescriptions;
};

#endif
