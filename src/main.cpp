#include <iostream>
#include <ncurses.h>
#include "Player.h"

using namespace std;

int main()
{
  // printw("Hola linux!");
  // refresh();

  // endwin();

  bool gameOver = false;
  Player mainPlayer;

  initscr();
  printw("Welcome to maze\n");

  while (gameOver == false){
    mainPlayer.callInput();
  }
  


  return 0;
}