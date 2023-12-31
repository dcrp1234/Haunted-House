/**
 * @author CS Suryadevara <chandrashekar->suryad@uleth->ca>
 * @author Prottasha D'cruze
 * @date 2022-11-10, 2022-10-03
 */
#include <iostream>
#include <string>
#include <utility>
#include <vector>

#include "Movement.h"
#include "Objects.h"
#include "Coordinate.h"
#include "Error.h"
#include "Character.h"

Movement::Movement() {
  //c->Direction='N';
}
void Movement::left(Coordinate *c, int map, Character *P) {
  //basement
  //error case vector
  for (int i = 0; i < Error_left.size(); i++) {
    if (Error_left[i] == map) {
      E.wall_error();
      break;
    }
  }
  if (map == 10001) {
    if (P->searchInventory("BASSKEY")) {
      c->x = 1;
      c->y = 0;
      c->Direction = 'E';
    } else {
      std::cout << "sorry you cant do it you dont have key";
    }

  } else if (map == 11001) {
    c->x = 1;
    c->y = 0;
    c->Direction = 'E';
  } else if (map == 10002) {
    c->x = 0;
    c->y = 1;
    c->Direction = 'N';
  } else if (map == 11013) {
    if (P->searchInventory("MASSKEY")) {
      c->x = 0;
      c->y = 0;
      c->Direction = 'S';
    } else {
      std::cout << "sorry you cant do it you dont have key";
    }
  } else if (map == 10013) {
    c->x = 0;
    c->y = 0;
    c->Direction = 'S';
  } else if (map == 10011 || map == 11011) {
    c->x = 1;
    c->y = 1;
    c->Direction = 'E';
  } else if (map == 10012 || map == 11012) {
    c->x = 0;
    c->y = 2;
    c->Direction = 'N';
  } else if (map == 10023 || map == 11023) {
    c->x = 0;
    c->y = 1;
    c->Direction = 'S';
  } else if (map == 10021) {
    c->x = 1;
    c->y = 2;
    c->Direction = 'E';
  } else if (map == 11021) {
    if (P->searchInventory("AXE")) {
      c->x = 1;
      c->y = 2;
      c->Direction = 'E';
    } else {
      std::cout << "sorry you can't do it you need something to break the door";
    }
  } else if (map == 10100) {
    c->x = 0;
    c->y = 0;
    c->Direction = 'W';
  } else if (map == 10101) {
    c->x = 2;
    c->y = 0;
    c->Direction = 'E';
  } else if (map == 10102 || map == 11102) {
    c->x = 1;
    c->y = 1;
    c->Direction = 'N';
  } else if (map == 10110 || map == 11110) {
    c->x = 0;
    c->y = 1;
    c->Direction = 'W';
  } else if (map == 10113) {
    if (P->searchInventory("MASSKEY")) {
      c->x = 1;
      c->y = 0;
      c->Direction = 'S';
    } else {
      std::cout << "sorry you cant do it you dont have key";
    }

  } else if (map == 11113) {
    c->x = 1;
    c->y = 0;
    c->Direction = 'S';
  } else if (map == 10111 || map == 11111) {
    c->x = 2;
    c->y = 1;
    c->Direction = 'E';
  } else if (map == 10112) {
    c->x = 1;
    c->y = 2;
    c->Direction = 'N';
  } else if (map == 11112) {
    if (P->searchInventory("AXE")) {
      c->x = 1;
      c->y = 2;
      c->Direction = 'N';
    } else {
      std::cout << "sorry you can't do it you need something to break the door";
    }

  } else if (map == 10120 || map == 11120) {
    c->x = 0;
    c->y = 2;
    c->Direction = 'W';
  } else if (map == 10123 || map == 11123) {
    c->x = 1;
    c->y = 1;
    c->Direction = 'S';
  } else if (map == 10121 || map == 11121) {
    c->x = 2;
    c->y = 2;
    c->Direction = 'E';
  } else if (map == 10200) {  //
    if (P->searchInventory("BASSKEY")) {
      c->x = 1;
      c->y = 0;
      c->Direction = 'W';
    } else {
      std::cout << "sorry you cant do it you dont have key";
    }
  } else if (map == 10202 || map == 11202) {
    c->x = 2;
    c->y = 1;
    c->Direction = 'N';
  } else if (map == 10210 || map == 11210) {
    c->x = 1;
    c->y = 1;
    c->Direction = 'W';
  } else if (map == 10213 || map == 11213) {
    c->x = 2;
    c->y = 0;
    c->Direction = 'S';
  } else if (map == 10212 || map == 11212) {
    c->x = 2;
    c->y = 2;
    c->Direction = 'N';
  } else if (map == 10220) {
    c->x = 1;
    c->y = 2;
    c->Direction = 'W';
  } else if (map == 11220) {
    if (P->searchInventory("AXE")) {
      c->x = 1;
      c->y = 2;
      c->Direction = 'W';
    } else {
      std::cout << "sorry you can't do it you need something to break the door";
    }
  } else if (map == 10223 || map == 11223) {
    c->x = 2;
    c->y = 1;
    c->Direction = 'S';
  }
}
void Movement::right(Coordinate *c, int map, Character *P) {
  //error case vector
  for (int i = 0; i < Error_right.size(); i++) {
    if (Error_right[i] == map) {
      E.wall_error();
      break;
    }
  }

  if (map == 10000) {
    if (P->searchInventory("BASSKEY")) {
      c->x = 1;
      c->y = 0;
      c->Direction = 'E';
    } else {
      std::cout << "sorry you cant do it you dont have key";
    }

  } else if (map == 10003 || map == 11003) {
    c->x = 0;
    c->y = 1;
    c->Direction = 'N';
  } else if (map == 10010 || map == 11010) {
    c->x = 1;
    c->y = 1;
    c->Direction = 'E';
  } else if (map == 10013 || map == 11013) {
    c->x = 0;
    c->y = 2;
    c->Direction = 'N';
  } else if (map == 10012 || map == 11012) {
    c->x = 0;
    c->y = 0;
    c->Direction = 'S';
  } else if (map == 10020) {
    c->x = 1;
    c->y = 2;
    c->Direction = 'E';
  } else if (map == 11020) {
    if (P->searchInventory("AXE")) {
      c->x = 1;
      c->y = 2;
      c->Direction = 'E';
    } else {
      std::cout << "sorry you can't do it you need something to break the door";
    }

  } else if (map == 10022 || map == 11022) {
    c->x = 0;
    c->y = 1;
    c->Direction = 'S';
  } else if (map == 10100) {
    c->x = 2;
    c->y = 0;
    c->Direction = 'E';
  } else if (map == 10103 || map == 110103) {
    c->x = 1;
    c->y = 1;
    c->Direction = 'N';
  } else if (map == 10101) {
    c->x = 0;
    c->y = 0;
    c->Direction = 'W';
  } else if (map == 10110 || map == 11110) {
    c->x = 2;
    c->y = 1;
    c->Direction = 'E';
  } else if (map == 10113) {
    c->x = 1;
    c->y = 2;
    c->Direction = 'N';
  } else if (map == 11113) {
    if (P->searchInventory("AXE")) {
      c->x = 1;
      c->y = 2;
      c->Direction = 'N';
    } else {
      std::cout << "sorry you can't do it you need something to break the door";
    }

  } else if (map == 10111 || map == 11111) {
    c->x = 0;
    c->y = 1;
    c->Direction = 'W';
  } else if (map == 10112) {
    if (P->searchInventory("BASSKEY")) {
      c->x = 1;
      c->y = 0;
      c->Direction = 'S';
    } else {
      std::cout << "sorry you cant do it you dont have key";
    }

  } else if (map == 11112) {
    c->x = 1;
    c->y = 0;
    c->Direction = 'S';
  } else if (map == 10120 || map == 11120) {
    c->x = 2;
    c->y = 2;
    c->Direction = 'E';
  } else if (map == 10121 || map == 11121) {
    c->x = 0;
    c->y = 2;
    c->Direction = 'W';
  } else if (map == 10122 || map == 11122) {
    c->x = 1;
    c->y = 1;
    c->Direction = 'S';
  } else if (map == 10203 || map == 11203) {
    c->x = 2;
    c->y = 1;
    c->Direction = 'N';
  } else if (map == 10201) {
    if (P->searchInventory("BASSKEY")) {
      c->x = 1;
      c->y = 0;
      c->Direction = 'W';
    } else {
      std::cout << "sorry you cant do it you dont have key";
    }

  } else if (map == 10213 || map == 11213) {
    c->x = 2;
    c->y = 2;
    c->Direction = 'N';
  } else if (map == 10211 || map == 11211) {
    c->x = 1;
    c->y = 1;
    c->Direction = 'W';
  } else if (map == 10212 || map == 11212) {
    c->x = 2;
    c->y = 0;
    c->Direction = 'S';
  } else if (map == 10221) {
    c->x = 1;
    c->y = 2;
    c->Direction = 'W';
  } else if (map == 11221) {
    if (P->searchInventory("AXE")) {
      c->x = 1;
      c->y = 2;
      c->Direction = 'W';
    } else {
      std::cout << "sorry you can't do it you need something to break the door";
    }

  } else if (map == 10222 || map == 11222) {
    c->x = 2;
    c->y = 1;
    c->Direction = 'S';
  }
}

void Movement::backward(Coordinate *c, int map, Character *P) {
  for (int i = 0; i < Error_back.size(); i++) {
    if (Error_back[i] == map) {
      E.wall_error();
      break;
    }
  }

  if (map == 12010) {
    c->x = 0;
    c->y = 0;
    c->Direction = 'S';
  } else if (map == 12011) {
    c->x = 0;
    c->y = 2;
    c->Direction = 'N';
  } else if (map == 12001) {
    c->x = 0;
    c->y = 1;
    c->Direction = 'N';
  } else if (map == 10003) {
    if (P->searchInventory("BASSKEY")) {
      c->x = 1;
      c->y = 0;
      c->Direction = 'E';
    } else {
      std::cout << "sorry you cant do it you dont have key";
    }

  } else if (map == 10001 || map == 11001) {
    c->x = 0;
    c->y = 1;
    c->Direction = 'N';
  } else if (map == 10010) {
    c->x = 0;
    c->y = 0;
    c->Direction = 'S';
  } else if (map == 11010) {
    if (P->searchInventory("MASSKEY")) {
      c->x = 0;
      c->y = 0;
      c->Direction = 'S';
    } else {
      std::cout << "sorry you cant do it you dont have key";
    }
  } else if (map == 10013 || map == 11013) {
    c->x = 1;
    c->y = 1;
    c->Direction = 'E';
  } else if (map == 10011 || map == 11011) {
    c->x = 0;
    c->y = 2;
    c->Direction = 'N';
  } else if (map == 10020 || map == 11020) {
    c->x = 0;
    c->y = 1;
    c->Direction = 'S';
  } else if (map == 10023) {
    c->x = 1;
    c->y = 2;
    c->Direction = 'E';
  } else if (map == 11023) {
    if (P->searchInventory("AXE")) {
      c->x = 1;
      c->y = 2;
      c->Direction = 'E';
    } else {
      std::cout << "sorry you can't do it you need something to break the door";
    }
  } else if (map == 10103) {
    c->x = 2;
    c->y = 0;
    c->Direction = 'E';
  } else if (map == 10101 || map == 11101) {
    c->x = 1;
    c->y = 1;
    c->Direction = 'N';
  } else if (map == 10102) {
    c->x = 0;
    c->y = 0;
    c->Direction = 'W';
  } else if (map == 10110) {
    if (P->searchInventory("BASSKEY")) {
      c->x = 1;
      c->y = 0;
      c->Direction = 'S';
    } else {
      std::cout << "sorry you cant do it you dont have key";
    }

  } else if (map == 11110) {
    c->x = 1;
    c->y = 0;
    c->Direction = 'S';
  } else if (map == 10113 || map == 11113) {
    c->x = 2;
    c->y = 1;
    c->Direction = 'E';
  } else if (map == 10111) {
    c->x = 1;
    c->y = 2;
    c->Direction = 'N';
  } else if (map == 11111) {
    if (P->searchInventory("AXE")) {
      c->x = 1;
      c->y = 2;
      c->Direction = 'N';
    } else {
      std::cout << "sorry you can't do it you need something to break the door";
    }

  } else if (map == 10112 || map == 11112) {
    c->x = 0;
    c->y = 1;
    c->Direction = 'W';
  } else if (map == 10120 || map == 11120) {
    c->x = 1;
    c->y = 1;
    c->Direction = 'S';
  } else if (map == 10123 || map == 11123) {
    c->x = 2;
    c->y = 2;
    c->Direction = 'E';
  } else if (map == 10122) {
    c->x = 0;
    c->y = 2;
    c->Direction = 'W';
  } else if (map == 11122) {
    if (P->searchInventory("AXE")) {
      c->x = 0;
      c->y = 2;
      c->Direction = 'W';
    } else {
      std::cout << "sorry you can't do it you need something to break the door";
    }

  } else if (map == 10201 || map == 11201) {
    c->x = 2;
    c->y = 1;
    c->Direction = 'N';
  } else if (map == 10202) {
    if (P->searchInventory("BASSKEY")) {
      c->x = 1;
      c->y = 0;
      c->Direction = 'W';
    } else {
      std::cout << "sorry you cant do it you dont have key";
    }

  } else if (map == 10210 || map == 11210) {
    c->x = 2;
    c->y = 0;
    c->Direction = 'S';
  } else if (map == 10211 || map == 11211) {
    c->x = 2;
    c->y = 2;
    c->Direction = 'N';
  } else if (map == 10212 || map == 11212) {
    c->x = 1;
    c->y = 1;
    c->Direction = 'W';
  } else if (map == 10220 || map == 11220) {
    c->x = 2;
    c->y = 1;
    c->Direction = 'S';
  } else if (map == 10222 || map == 11222) {
    c->x = 1;
    c->y = 2;
    c->Direction = 'W';
  }
}

void Movement::forward(Coordinate *c, int map, Character *P) {
  for (int i = 0; i < Error_front.size(); i++) {
    if (Error_front[i] == map) {
      E.wall_error();
      break;
    }
  }
  if (map == 12010) {
    c->x = 0;
    c->y = 2;
    c->Direction = 'N';
  } else if (map == 12011) {
    c->x = 0;
    c->y = 0;
    c->Direction = 'S';
  } else if (map == 12020) {
    std::cout << "+++++++++++++++++++++++++++++++++++++++++"
        "+++++++++++++++++++++++++++++++++++++++++++\n\n";
    std::cout << "       __xxxxxxxxxxxxxxxx___.\n"
        " _gxXXXXXXXXXXXXXXXXXXXXXXXX!x_\n"
        "__x!XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX!x_\n"
        ",gXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXx_\n"
        ",gXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX!_\n"
        "_!XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX!.\n"
        "gXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXs\n"
        ",!XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX!.\n"
        "g!XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX!\n"
        "iXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX!\n"
        ",XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
        "XXXXXXXXXXXXXXXx\n"
        "!XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
        "XXXXXXXXXXXXXXXXx\n"
        ",XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
        "XXXXXXXXXXXXXXXXx\n"
        "!XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
        "XXXXXXXXXXXXXXXXXi\n"
        "dXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
        "XXXXXXXXXXXXXXXXXX\n"
        "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
        "XXXXXXXXXXXXXXXXXXXX!\n"
        "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
        "XXXXXXXXXXXXXXXXXX!\n"
        "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
        "XXXXXXXXXXXXXXXXXX\n"
        "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
        "XXXXXXXXXXXXXXXXX\n"
        "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
        "XXXXXXXXXXXXXXX!\n"
        "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
        "XXXXXXXXXXXXXXXXX!\n"
        "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
        "XXXXXXXXXXXXXXXX!\n"
        "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
        "XXXXXXXXXXXXXXXX!\n"
        "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
        "XXXXXXXXXXXXXXXX\n"
        "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
        "XXXXXXXXXXXXXXXX\n"
        "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
        "XXXXXXXXXXXXXXX\n"
        "!XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
        "XXXXXXXXXXXXXXX\n"
        "XXXXXXXXXXXXXXXXXXXf~~~VXXXXXXXXXXXXXXXXXXXXXXXXXXvvvvvvvvXXX"
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
        "XXXXXXXX!                ,!XXXX ~~XXXXXXX               iXXXXXX~\n"
        "XXXXXXXX               ,XXXXXX   XXXXXXXX!             xXXXXXX!\n"
        "!XXXXXXX!xxxxxxs______xXXXXXXX   YXXXXXX!          ,xXXXXXXXX\n"
        "YXXXXXXXXXXXXXXXXXXXXXXXXXXX`    VXXXXXXX!s. __gxx!XXXXXXXXXP\n"
        "XXXXXXXXXXXXXXXXXXXXXXXXXX!      XXXXXXXXXXXXXXXXXXXXXXXXX!\n"
        "XXXXXXXXXXXXXXXXXXXXXXXXXP        YXXXXXXXXXXXXXXXXXXXXXXX!\n"
        "XXXXXXXXXXXXXXXXXXXXXXXX!     i    !XXXXXXXXXXXXXXXXXXXXXXXX\n"
        "XXXXXXXXXXXXXXXXXXXXXXXX!     XX   !XXXXXXXXXXXXXXXXXXXXXXXX\n"
        "XXXXXXXXXXXXXXXXXXXXXXXXx_   iXX_,_dXXXXXXXXXXXXXXXXXXXXXXXX\n"
        "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXP\n"
        "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX!\n"
        "~vXvvvvXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXf\n"
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

    std::cout << "+++++++++++++++++++++++++++++++++++++++++"
        "+++++++++++++++++++++++++++++++++++++++++++\n\n";
    std::cout << "\nYou are dead the ghost killed you" << std::endl;
    exit(0);
  } else if (map == 12000) {
    c->x = 0;
    c->y = 1;
    c->Direction = 'N';
  } else if (map == 10000 || map == 11000) {
    c->x = 0;
    c->y = 1;
    c->Direction = 'N';
  } else if (map == 10002) {
    if (P->searchInventory("BASSKEY")) {
      c->x = 1;
      c->y = 0;
      c->Direction = 'E';
    } else {
      std::cout << "sorry you cant do it you dont have key";
    }

  } else if (map == 10010 || map == 11010) {
    c->x = 0;
    c->y = 2;
    c->Direction = 'N';
  } else if (map == 10011 || map == 11011) {
    c->x = 0;
    c->y = 0;
    c->Direction = 'S';
  } else if (map == 10012) {
    c->x = 1;
    c->y = 1;
    c->Direction = 'E';
  } else if (map == 11012) {
    if (P->searchInventory("MASSKEY")) {
      c->x = 0;
      c->y = 0;
      c->Direction = 'S';
    } else {
      std::cout << "sorry you cant do it you dont have key";
    }
  } else if (map == 10021 || map == 11021) {
    c->x = 0;
    c->y = 1;
    c->Direction = 'S';
  } else if (map == 10022 || map == 11022) {
    c->x = 1;
    c->y = 2;
    c->Direction = 'E';
  } else if (map == 10100 || map == 11100) {
    c->x = 1;
    c->y = 1;
    c->Direction = 'N';
  } else if (map == 10103) {
    c->x = 0;
    c->y = 0;
    c->Direction = 'W';
  } else if (map == 10102) {
    c->x = 2;
    c->y = 0;
    c->Direction = 'E';
  } else if (map == 10110) {
    c->x = 1;
    c->y = 2;
    c->Direction = 'N';
  } else if (map == 11110) {
    if (P->searchInventory("AXE")) {
      c->x = 1;
      c->y = 2;
      c->Direction = 'N';
    } else {
      std::cout << "sorry you can't do it you need something to break the door";
    }

  } else if (map == 10113 || map == 11113) {
    c->x = 0;
    c->y = 1;
    c->Direction = 'W';
  } else if (map == 10111) {
    if (P->searchInventory("BASSKEY")) {
      c->x = 1;
      c->y = 0;
      c->Direction = 'S';
    } else {
      std::cout << "sorry you cant do it you dont have key";
    }

  } else if (map == 11111) {
    c->x = 1;
    c->y = 0;
    c->Direction = 'S';
  } else if (map == 10112 || map == 11112) {
    c->x = 2;
    c->y = 1;
    c->Direction = 'E';
  } else if (map == 10123 || map == 11123) {
    c->x = 0;
    c->y = 2;
    c->Direction = 'W';
  } else if (map == 10121 || map == 11121) {
    c->x = 1;
    c->y = 1;
    c->Direction = 'S';
  } else if (map == 10122) {
    c->x = 2;
    c->y = 2;
    c->Direction = 'E';
  } else if (map == 11122) {
    if (P->searchInventory("AXE")) {
      c->x = 2;
      c->y = 2;
      c->Direction = 'E';
    } else {
      std::cout << "sorry you can't do it you need something to break the door";
    }
  } else if (map == 10200 || map == 11200) {
    c->x = 2;
    c->y = 1;
    c->Direction = 'N';
  } else if (map == 10203) {
    if (P->searchInventory("BASSKEY")) {
      c->x = 1;
      c->y = 0;
      c->Direction = 'W';
    } else {
      std::cout << "sorry you cant do it you dont have key";
    }

  } else if (map == 10210 || map == 11210) {
    c->x = 2;
    c->y = 2;
    c->Direction = 'N';
  } else if (map == 10213 || map == 11213) {
    c->x = 1;
    c->y = 1;
    c->Direction = 'W';
  } else if (map == 10211 || map == 11211) {
    c->x = 2;
    c->y = 0;
    c->Direction = 'S';
  } else if (map == 10223) {
    c->x = 1;
    c->y = 2;
    c->Direction = 'W';
  } else if (map == 11223) {
    if (P->searchInventory("AXE")) {
      c->x = 1;
      c->y = 2;
      c->Direction = 'W';
    } else {
      std::cout << "sorry you can't do it you need something to break the door";
    }

  } else if (map == 10221 || map == 11221) {
    c->x = 2;
    c->y = 1;
    c->Direction = 'S';
  }
}

void Movement::GoUpstairs(Coordinate *c) {
  if (c->floor < 3 && c->floor >= 0) {
    if (c->floor == 0 && c->x == 2 && c->y == 2) {
      c->floor = c->floor + 1;
      c->x = 2;
      c->y = 0;
      c->Direction = 'N';
    } else if (c->floor == 1 && c->x == 2 && c->y == 0) {
      c->floor = c->floor + 1;
      c->x = 0;
      c->y = 0;
      c->Direction = 'N';
    } else {
      std::cout << "No stairs nearby.\n";
    }
  } else {
    std::cout << "Already at top floor.\n";
  }
}

void Movement::GoDownstairs(Coordinate *c) {
  if (c->floor != 0 && c->floor <= 3) {
    if (c->floor == 1 && c->x == 2 && c->y == 0) {
      c->floor = c->floor - 1;
      c->x = 2;
      c->y = 2;
      c->Direction = 'N';
    } else if (c->floor == 2 && c->x == 0 && c->y == 0) {
      c->floor = c->floor - 1;
      c->x = 2;
      c->y = 0;
      c->Direction = 'N';
    } else {
      std::cout << "No stairs nearby.\n";
    }
  } else {
    std::cout << "Already at bottom floor.\n";
  }
}

