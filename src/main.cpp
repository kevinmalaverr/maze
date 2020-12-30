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
  Player mainPlayer;

  win = initscr();
  keypad(win, TRUE);
  printw("Welcome to maze\n");

  refresh();

  while (gameOver == false){
    mainPlayer.callInput();
    map.setPlayerCell(mainPlayer.x, mainPlayer.y);
    map.draw();
  }
  
  return 0;
}