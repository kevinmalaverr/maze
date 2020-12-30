#include "GameMap.h"
#include <ncurses.h>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

GameMap::GameMap(){
  playerCell = NULL;
  loadMapFromFile();
}

void GameMap::draw(){
  clear();

  for(int y = 0; y < 15; y++){
    for(int x = 0; x < 10; x++){
      printw("%c", cells[y][x].id);
    }
    printw("\n");
  }
  refresh();
}

bool GameMap::setPlayerCell(int px, int py){
  if(cells[py][px].isBlocked() == false){
    if(playerCell != NULL){
      playerCell->id = ' ';
    }

    playerCell = &cells[py][px];
    playerCell->id = 'p';
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