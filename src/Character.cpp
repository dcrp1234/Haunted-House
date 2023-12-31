/**
 * @author CS Suryadevara <chandrashekar.suryad@uleth.ca>
 * @date 2022-11-10, 2022-10-03
 */
#include <iostream>
#include <string>
#include "Coordinate.h"
#include "Character.h"

/*MainCharacter::MainCharacter(const Coordinate &c) {
 location.floor = c.floor;
 location.x = c.x;
 location.y = c.y;
 }*/

Character::Character() {
  //identifier =0;
  /*  location.floor = 0;
   location.x = 0;
   location.y = 0;*/
}
//MainCharacter::MainCharacter(std::string main,int id){
//      name=main;
//     identifier=id;
//}
std::string Character::getName() {
  return name;
}
void Character::setName() {
  std::cout << "\nEnter the player's name" << std::endl;
  getline(std::cin, name);
}
void Character::addToInventory(std::string Item) {
  Inventory.push_back(Item);
}
void Character::removeFromInventory(std::string item) {
  for (int i = 0; i < Inventory.size(); i++) {
    if (Inventory[i] == item) {
      Inventory.erase(Inventory.begin() + i);
    }
  }
}
void Character::Display() {
  for (int i = 0; i < Inventory.size(); i++) {
    std::cout << "[" << i << "]" << " " << Inventory[i] << std::endl;
  }
}
bool Character::searchInventory(std::string item) {
  for (int i = 0; i < Inventory.size(); i++) {
    if (Inventory[i] == item) {
      return true;
    }
  }
  return false;
}

/*Coordinate getLocation() {
 return location;
 }*/
