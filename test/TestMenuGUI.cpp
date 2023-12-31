#include <string>
#include <iostream>
#include "MenuGUI.h"
#include "Coordinate.h"
#include "gtest/gtest.h"
#include "Movement.h"
#include "Operations.h"
#include "Error.h"

TEST(TestMenuGUI, toUpper) {
  std::string t = "testing";
  EXPECT_EQ(MenuGUI::toUpper(t), "TESTING");
}
