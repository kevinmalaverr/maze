#include "GameMap.h"
#include <ncurses.h>
#include <fstream>
#include <iostream>
#include <string>
#include <map>

using namespace std;

GameMap::GameMap(){
  playerCell = NULL;
  loadMapFromFile();
}

void GameMap::initColorPair(){
  init_pair(VOID_PAIR, COLOR_BLACK, COLOR_BLACK);
  init_pair(WALL_PAIR, COLOR_YELLOW, COLOR_BLACK);
  init_pair(PLAYER_PAIR, COLOR_WHITE, COLOR_BLACK);
} 

void GameMap::draw(){
  clear();

  char id;
  short color;

  for(int y = 0; y < 15; y++){
    for(int x = 0; x < 10; x++){
      id = cells[y][x].id;
      color = colorMap.at(id);

      attron(COLOR_PAIR(color));
      printw("%c", id);
      attroff(COLOR_PAIR(color));
    }
    printw("\n");
  }
  
}
 
bool GameMap::setPlayerCell(int px, int py){
  if(cells[py][px].isBlocked() == false){
    if(playerCell != NULL){
      playerCell->id = 'b';
    }

    playerCell = &cells[py][px];
    playerCell->id = '0';
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
        cells[row][i].id = line[i];
      }
      row++;
    }
    
  } else {
    cout << "map.txt doesn exist" << endl;
  }
}