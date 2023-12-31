/**
 * @author CS Suryadevara <chandrashekar.suryad@uleth.ca>
 * @date 2022-11-10, 2022-10-03
 */

#ifndef OBJECTS_H_INCLUDED
#define OBJECTS_H_INCLUDED
#include <string>
#include <iostream>
#include <map>
#include "Coordinate.h"
#include "Character.h"

/**
 * @class Objects Objects.h "Objects.h"
 * @brief A class to interact and use different objects
 */
class Objects {
 public:
  enum OBJECTS_LOG {
    TORCH,
    BASSKEY,
    MASSKEY,
    LIBKEY,
    OBJECTS,
    NULA,
    AXE
  };
  /**
   * @brief Constructor
   */
  Objects(Character *P)
      :
      Player(P) {
  }
  /**
   * @brief A method to add an object to user's inventory
   */
  void ADD(Coordinate *c, std::string);
  /**
   * @brief Destructor
   */
  virtual ~Objects() {
  }

  //Objects* pick(std::string, Coordinate *c);
  /**
   * @brief This function helps the user to use any particular object
   * @param[in] string and coordinate
   */
  void use(std::string, Coordinate *c);
  bool mapUse = 0;
  bool map_pick = 0;
  bool axe_pick = 0;
  bool masskey_pick = 0;
  bool basskey_pick = 0;
  bool keyUse = 0;
  bool axeUse = 0;
  /**
   * @brief Talks to doll
   */
  void useDollFunction();
  std::string pass;

 private:
  std::map<int, int> pickedflag;
  Character *Player;
};

#endif // OBJECTS_H_INCLUDED
