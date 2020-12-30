#include <ncurses.h>
#include "Player.h"


Player::Player(){
  x = 1;
  y = 1;
};

void Player::callInput(){
  int userInput = getch();

  //asign las coords
  lastX = x;
  lastY = y;

  switch (userInput){
    case 'w':
      y--;
      break;
    case 's':
      y++;
      break;
    case 'a':
      x--;
      break;
    case 'd':
      x++;
      break;
    
    default:
      break;
  }
  refresh();
}

void Player::resetToLastPosition(){
  x = lastX;
  y = lastY;
}