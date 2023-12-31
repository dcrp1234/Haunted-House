/**
 * @author CS Suryadevara <chandrashekar.suryad@uleth.ca>
 * @date 2022-11-10, 2022-10-03
 */

#ifndef CHARACTER_H_INCLUDED
#define CHARACTER_H_INCLUDED

#include <vector>
#include <string>

//#include "Objects.h"
#include "Coordinate.h"

/**
 * @class MainCharacter MainCharacter.h "MainCharacter.h"
 * @brief class contains properties of main character
 */
class Character {
 public:
  /**
   * @brief Constructor, to define name and location of main character
   *  MainCharacter(const Coordinate &c);
   */

  Character();
  /**
   * @brief Destructor
   */
  ~Character() {
  }
  /**
   * @brief function to get name of user
   */
  std::string getName();
  /**
   * @brief function to set name of user
   */
  void setName();
  //void RoomDeath();
  //void Discuss();
  //void InspectSurroundings();

  //Coordinate getLocation();
  void addToInventory(std::string);
  void removeFromInventory(std::string);
  bool searchInventory(std::string);
  void Display();

  private:
  std::string name;
  std::vector<std::string> Inventory;
  //int identifier;
};

#endif // MAINCHARCTER_H_INCLUDED
