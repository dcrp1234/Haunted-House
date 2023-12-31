#include <string>
#include <iostream>

#include "Coordinate.h"
#include "gtest/gtest.h"
#include "Movement.h"
#include "Operations.h"
#include "Error.h"
#include "Character.h"

TEST(TestMovement, ForwardPossible) {
  //char Direction= 'N';
  Movement M;
  Operations OP;
  Coordinate c(0, 1, 0);
  Character p;
  M.forward(&c, OP.Logic_Operation(&c), &p);
  EXPECT_EQ(c.x, 1);
  EXPECT_EQ(c.y, 1);
}
TEST(TestMovement, RightPossible) {
  //char Direction= 'N';
  Movement M;
  Coordinate c(0, 0, 1);
  Operations OP;
  Character p;
  M.right(&c, OP.Logic_Operation(&c), &p);
  EXPECT_EQ(c.x, 1);
  EXPECT_EQ(c.y, 1);
}
TEST(TestMovement, BackwardPossible) {
  //char Direction= 'N';
  Movement M;
  Coordinate c(0, 1, 0);
  Operations OP;
  Character p;
  M.backward(&c, OP.Logic_Operation(&c), &p);
  EXPECT_EQ(c.x, 1);
  EXPECT_EQ(c.y, 0);
}
TEST(TestMovement, LeftPossible) {
  //char Direction= 'N';
  Movement M;
  Coordinate c(0, 1, 0);
  Operations OP;
  Character p;
  M.left(&c, OP.Logic_Operation(&c), &p);
  EXPECT_EQ(c.x, 0);
  EXPECT_EQ(c.y, 0);
}
TEST(TestMovement, storeKey) {
  Movement M;
  Coordinate c(0, 0, 0);
  Operations OP;
  Character p;
  std::string Item = "BASSKEY";
  p.addToInventory(Item);
  M.right(&c, OP.Logic_Operation(&c), &p);
  EXPECT_EQ(c.x, 1);
  EXPECT_EQ(c.y, 0);
}
TEST(TestMovement, movementRestrictedDueToNoKey) {
  Movement M;
  Coordinate c(0, 0, 0);
  Operations OP;
  Character p;
  M.right(&c, OP.Logic_Operation(&c), &p);
  EXPECT_EQ(c.x, 0);
  EXPECT_EQ(c.y, 0);
}
TEST(TestMovement, MasterKey) {
}
TEST(TestMovement, Axetest) {
}
/*
 TEST(TestMovement,LeftImpossible){
 char Direction= 'N';
 Movement M;
 Direction = 'N';
 Coordinate c(0,0,0);
 M.left(c);
 EXPECT_EQ(M.left(c),"Sorry you can't perform this because there is wall in front of you.");
 }
 TEST(TestMovement,ForwardImpossible){
 char Direction= 'N';
 Movement M;
 Direction = 'N';
 Coordinate c(0,0,2);
 Movement M;
 M.forward(c);
 EXPECT_EQ(M.left(c),"Sorry you can't perform this because there is wall in front of you.");
 }
 TEST(TestMovement,RightImpossible){
 char Direction= 'N';
 Movement M;
 Direction = 'N';
 Coordinate c(0,2,0);
 M.right(c);
 EXPECT_EQ(M.left(c),"Sorry you can't perform this because there is wall in front of you.");
 }
 TEST(TestMovement,BackwardImpossible){
 char Direction= 'N';
 Movement M;
 Direction = 'N';
 Coordinate c(0,0,0);
 EXPECT_EQ(M.left(c),"Sorry you can't perform this because there is wall in front of you.");
 */
