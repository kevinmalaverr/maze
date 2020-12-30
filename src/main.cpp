#include <iostream>
#include <ncurses.h>
#include "Player.h"
#include "MapCell.h"
#include "GameMap.h"

using namespace std;

WINDOW *win;

int main()
{
  bool gameOver = false;
  GameMap map;
  Player player;

  win = initscr();
  keypad(win, TRUE);
  printw("Welcome to maze\n");

  refresh();

  while (gameOver == false){
    player.callInput();
    if(!map.setPlayerCell(player.x, player.y)){
      player.resetToLastPosition();
    };

    map.draw();
  }
  
  return 0;
}