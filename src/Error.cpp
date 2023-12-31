/**
 * @author CS Suryadevara <chandrashekar.suryad@uleth.ca>
 * @date 2022-11-10, 2022-10-03
 */
#include <iostream>

#include "Error.h"

Error::Error() {
}
void Error::wall_error() {
  std::cout << "there is a wall";
}
void Error::cant() {
  std::cout << "Can't do this operation please take stairs." << std::endl;
}
void Error::wrong_key() {
  std::cout << "Not the correct key";
}
