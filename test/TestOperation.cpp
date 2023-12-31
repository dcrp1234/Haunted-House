#include <string>
#include <iostream>

#include "Coordinate.h"
#include "gtest/gtest.h"
#include "Movement.h"
#include "Operations.h"
#include "Error.h"
#include "Character.h"

TEST(TestOperation, calculationTest1) {
  Coordinate c;
  Operations O;
  EXPECT_EQ(O.Logic_Operation(&c), 10000);
}

TEST(TestOperation, calculationTest2) {
  Coordinate c(1, 1, 0, 'E');
  Operations O;
  EXPECT_EQ(O.Logic_Operation(&c), 11102);
}
TEST(TestOperation, calculationTest3) {
  Coordinate c(1, 2, 0, 'W');
  Operations O;
  EXPECT_EQ(O.Logic_Operation(&c), 11203);
}
TEST(TestOperation, calculationTest4) {
  Coordinate c(2, 0, 1, 'S');
  Operations O;
  EXPECT_EQ(O.Logic_Operation(&c), 12011);
}
