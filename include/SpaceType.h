/**
 * @author CS Suryadevara <chandrashekar.suryad@uleth.ca>
 * @date 2022-11-10, 2022-10-03
 */

#ifndef SPACETYPE_H_INCLUDED
#define SPACETYPE_H_INCLUDED

/**
 * @class SpaceType SpaceType.h "SpaceType.h"
 * @brief interface for rooms 
 */
class SpaceType {
 public:
  /**
   * @brief Constructor, to move around the room
   */
  SpaceType();

  /**
   * @brief Destructor
   */
  virtual ~SpaceType() {
  }
  /**
   * @brief Gives description of the room
   */
  //virtual void getDescription();
  /**
   * @brief  Provides hint to the user
   */
  virtual void hint();
};

#endif // SPACETYPE_H_INCLUDED

