/**
 * @author Disha Patel <disha.patel@uleth.ca>
 * @author Prottasha D'cruze <dcruze@uleth.ca>
 * @date 2022-12-01, 2022-10-03
 */

#include <string>
#include "Description.h"
#include "Coordinate.h"
#include "Error.h"

void Description::getDisplay(Coordinate *c) {
  char mydirection = c->Direction;
  Coordinate *myright;
  Coordinate *myleft;
  Coordinate *myfront;

  int coord = 9000 + c->floor * 100 + c->x * 10 + c->y;
  if (c->floor == 0 || c->floor == 2) {
    Coordinate *mynortheast;
    Coordinate *mynorthwest;
    if (mydirection == 'N') {
      myfront = new Coordinate(c->floor, c->x, c->y + 1, c->Direction);
      myright = new Coordinate(c->floor, c->x + 1, c->y, c->Direction);
      myleft = new Coordinate(c->floor, c->x - 1, c->y, c->Direction);
      mynortheast = new Coordinate(c->floor, c->x + 1, c->y + 1, c->Direction);
      mynorthwest = new Coordinate(c->floor, c->x - 1, c->y + 1, c->Direction);
    } else if (mydirection == 'S') {
      myfront = new Coordinate(c->floor, c->x, c->y - 1, c->Direction);
      myright = new Coordinate(c->floor, c->x - 1, c->y, c->Direction);
      myleft = new Coordinate(c->floor, c->x + 1, c->y, c->Direction);
      mynortheast = new Coordinate(c->floor, c->x - 1, c->y - 1, c->Direction);
      mynorthwest = new Coordinate(c->floor, c->x + 1, c->y - 1, c->Direction);
    } else if (mydirection == 'E') {
      myfront = new Coordinate(c->floor, c->x + 1, c->y, c->Direction);
      myright = new Coordinate(c->floor, c->x, c->y - 1, c->Direction);
      myleft = new Coordinate(c->floor, c->x, c->y + 1, c->Direction);
      mynortheast = new Coordinate(c->floor, c->x + 1, c->y - 1, c->Direction);
      mynorthwest = new Coordinate(c->floor, c->x + 1, c->y + 1, c->Direction);
    } else if (mydirection == 'W') {
      myfront = new Coordinate(c->floor, c->x - 1, c->y, c->Direction);
      myright = new Coordinate(c->floor, c->x, c->y + 1, c->Direction);
      myleft = new Coordinate(c->floor, c->x, c->y - 1, c->Direction);
      mynortheast = new Coordinate(c->floor, c->x - 1, c->y + 2, c->Direction);
      mynorthwest = new Coordinate(c->floor, c->x - 1, c->y - 1, c->Direction);
    } else {
      std::cout << "Invalid direction. Don't how u did that!";
    }

    getDescription(myfront, "\n On your front ");
    getDescription(myright, "\n On your right ");
    getDescription(myleft, "\n On your left ");
    getDescription(mynortheast, "\n On your north-east ");
    getDescription(mynorthwest, "\n On your north-west ");
    // floor ==0
  } else if (c->floor == 1) {
    if (coord == 9102 || coord == 9112) {
      if (mydirection == 'N') {
        std::cout << "Walls around you, the door behind you.\n";
      } else if (mydirection == 'S') {
        std::cout << "Facing the door, walls on other three sides.\n";
      } else if (mydirection == 'E') {
        std::cout << "Facing the wall, door to your right.\n";
      } else {
        std::cout << "Facing the wall, door to your right.\n";
      }
      // for library and bathroom
    } else if (coord == 9100 || coord == 9110) {
      if (mydirection == 'S') {
        std::cout << "Walls around you, the door behind you.\n";
      } else if (mydirection == 'N') {
        std::cout << "Facing the door, walls on other three sides.\n";
      } else if (mydirection == 'W') {
        std::cout << "Facing the wall, door to your right.\n";
      } else {
        std::cout << "Facing the wall, door to your right.\n";
      }  // for master and childs
    } else if (coord == 9101 || coord == 9111) {
      if (coord == 9101) {
        if (mydirection == 'N') {
          std::cout << "Facing the door that leads to the library. "
              "On your right is the hallway towards stairs.\n"
              "On your left is the end of the hallway.\n";
        } else if (mydirection == 'S') {
          std::cout << "Facing the door to the Master bedroom. "
              "On your right is the end of the hallway.\n"
              "On your left is the hallway towards stairs.\n";
        } else if (mydirection == 'E') {
          std::cout << "Facing the hallway. "
              "On your right is the door to Master bedroom.\n"
              "On your left is the Library door.\n";
        } else {
          std::cout << "Facing the wall at the end of the hallway. "
              "On your right is the Library door.\n"
              "On your left is the door to Child's bedroom.\n";
        }  // for hallway end coordinate
      } else {
        if (mydirection == 'N') {
          std::cout << "Facing the door that leads to the bathroom."
              " On your right is the hallway towards stairs.\n"
              "On your left is the hallway continued.\n";
        } else if (mydirection == 'S') {
          std::cout << "Facing the door to the child's bedroom. "
              "On your right is the hallway continued.\n"
              "On your left is the hallway towards stairs.\n";
        } else if (mydirection == 'E') {
          std::cout << "Facing the hallway towards stairs. "
              "On your right is the door to child's bedroom.\n"
              "On your left is the bathroom door.\n";
        } else {
          std::cout << "Facing the hallways go forward towards end of Hallway."
              " On your right is the bathroom door.\n"
              "On your left is the door to child's bedroom.\n";
        }
      }  // for hallway
    } else if (coord == 9120 || coord == 9122) {
      if (coord == 9122) {
        if (mydirection == 'N') {
          std::cout << "Possible to move backwards walls on other sides.\n";
        } else if (mydirection == 'S') {
          std::cout << "Possible to move forward walls on other sides.\n";
        } else if (mydirection == 'E') {
          std::cout << "Possible to move right walls on other sides.\n";
        } else {
          std::cout << "Possible to move left walls on other sides.\n";
        }
      } else {
        if (mydirection == 'N') {
          std::cout << "Possible to move forward walls on other sides.\n";
        } else if (mydirection == 'S') {
          std::cout << "Possible to move backward walls on other sides.\n";
        } else if (mydirection == 'E') {
          std::cout << "Possible to move left walls on other sides.\n";
        } else {
          std::cout << "Possible to move right walls on other sides.\n";
        }
      }  //for end coordinates
    } else if (coord == 9121) {
      if (mydirection == 'N') {
        myfront = new Coordinate(c->floor, c->x, c->y + 1, c->Direction);
        myright = new Coordinate(c->floor, c->x + 1, c->y, c->Direction);
        myleft = new Coordinate(c->floor, c->x - 1, c->y, c->Direction);
      } else if (mydirection == 'S') {
        myfront = new Coordinate(c->floor, c->x, c->y - 1, c->Direction);
        myright = new Coordinate(c->floor, c->x - 1, c->y, c->Direction);
        myleft = new Coordinate(c->floor, c->x + 1, c->y, c->Direction);
      } else if (mydirection == 'E') {
        myfront = new Coordinate(c->floor, c->x + 1, c->y, c->Direction);
        myright = new Coordinate(c->floor, c->x, c->y - 1, c->Direction);
        myleft = new Coordinate(c->floor, c->x, c->y + 1, c->Direction);
      } else {
        myfront = new Coordinate(c->floor, c->x - 1, c->y, c->Direction);
        myright = new Coordinate(c->floor, c->x, c->y + 1, c->Direction);
        myleft = new Coordinate(c->floor, c->x, c->y - 1, c->Direction);
      }
      getDescription(myfront, "\n On your front ");
      getDescription(myright, "\n On your right ");
      getDescription(myleft, "\n On your left ");
    }
  }  // for living room, floor ==1
}  //void end

void Description::getDescription(Coordinate *c, std::string side) {
  //std::cout << "  Coordinate is " << c->x << " " << c->y << "\n";
  Error E;
  setmap();
  if (c->outOfBounds() == true) {
    std::cout << side;
    E.wall_error();
  } else {
    int coord = 9000 + c->floor * 100 + c->x * 10 + c->y;
    // std::cout << " (" << coord << ") ";
    std::cout << side << storageOfDescriptions.at(coord);
  }
}

