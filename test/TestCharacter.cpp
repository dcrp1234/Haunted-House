#include <string>
#include <iostream>
#include "MenuGUI.h"
#include "Coordinate.h"
#include "gtest/gtest.h"
#include "Movement.h"
#include "Operations.h"
#include "Character.h"
#include "Error.h"

TEST(TestCharacter, searchInventory) {
  std::string obj = "MAP";
  //Character* p;
  Character p1;
  p1.addToInventory(obj);
  EXPECT_TRUE(p1.searchInventory(obj));
}
/*TEST(TestCaracter,addToInventory){
  Character p1;
  std::string obj = "MAP";
  std::string obj2 = "KEY";
  p1.addToInventory(obj);
  int s = p1.Inventory.size();
  p1.addToInventory(obj2);
  EXPECT_EQ(p1.Inventory.size(),s+1);
}
TEST(TestCaracter,removeFromInventory){
  Character p1;
  std::string obj = "MAP";
  std::string obj2 = "KEY";
  p1.addToInventory(obj);
  p1.addToInventory(obj2);
  int s = p1.Inventory.size();
  p1.removeFromInventory(obj);
  EXPECT_EQ(p1.Inventory.size(),s-1);
}
*/
