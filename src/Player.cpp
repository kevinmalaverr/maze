#include <ncurses.h>
#include "Player.h"




Player::Player(){
  x = 1;
  y = 1;
};

void Player::callInput(){
  int userInput = getch();

  switch (userInput){
    case 'w':
      y++;
      printw("UP\n");
      break;
    case 's':
      y--;
      printw("down\n");
      break;
    case 'a':
      x--;
      printw("left\n");
      break;
    case 'd':
      x++;
      printw("right\n");
      break;
    
    default:
      break;
  }
  refresh();
}