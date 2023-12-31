/**
 * @author CS Suryadevara <chandrashekar.suryad@uleth.ca>
 * @date 2022-11-10, 2022-10-03
 */

#ifndef HAUNTEDHOUSE_H_INCLUDED
#define HAUNTEDHOUSE_H_INCLUDED

/**
 * @class HauntedHouse HauntedHouse.h "HauntedHouse.h"
 * @brief Gets the story started and gives a description of the story
 */
class HauntedHouse {
 public:
  /**
   * @brief Default constructor
   */
  HauntedHouse();

  /**
   * @brief Tells the story to get the user started
   */
  void TellStory();

  /**
   * @brief A function to go to different levels in the haunted house
   */
  const int getFloor();

  /**
   * @brief A method to set floor
   * @param[in] Floor number
   */
  void setFloor(int);

 private:
  int floor;
};

#endif // HAUNTEDHOUSE_H_INCLUDED
