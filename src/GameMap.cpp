#include "GameMap.h"
#include <ncurses.h>

GameMap::GameMap(){

}

void GameMap::draw(){
  for(int i = 0; i < 15; i++){
    for(int j = 0; j < 10; j++){
      printw("0");

    }
    printw("\n");
    refresh();
  }
}