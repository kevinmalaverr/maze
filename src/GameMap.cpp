#include "GameMap.h"
#include <ncurses.h>
#include <fstream>
#include <iostream>
#include <string>
#include <map>
#include "MapCell.h"

using namespace std;

GameMap::GameMap(){
  playerCell = NULL;
  loadMapFromFile();
}

void GameMap::initColorPair(){
  init_pair(0, COLOR_BLACK, COLOR_BLACK);
  init_pair(1, COLOR_YELLOW, COLOR_BLACK);
  init_pair(2, COLOR_RED, COLOR_BLACK);
} 

void GameMap::draw(){
  clear();

  for(int y = 0; y < 15; y++){
    for(int x = 0; x < 10; x++){
      attron(COLOR_PAIR(cells[y][x].drawColor));
      printw("%c", cells[y][x].drawChar);
      attroff(COLOR_PAIR(cells[y][x].drawColor));
    }
    printw("\n");
  }
}
 
bool GameMap::setPlayerCell(int px, int py){
  if(cells[py][px].isBlocked() == false){
    if(playerCell != NULL){
      playerCell->setId('b');
    }

    playerCell = &cells[py][px];
    playerCell->setId('p');
    return true;
  }

  return false;
} 

void GameMap::loadMapFromFile(){
  string line;
  ifstream file("map.txt");
  int row = 0;

  if(file.is_open()){
    while (getline(file, line)){
      for (int i = 0; i < line.length(); i++){
        cells[row][i].setId(line[i]);
      }
      row++;
    }
    
  } else {
    cout << "map.txt doesn exist" << endl;
  }
}