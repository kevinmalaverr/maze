#include "MapCell.h"
#include <iostream>
#include <map>

using namespace std;

// key drawchar color

map<char, char> mapDrawChar = {{'b',' '},
                              {'w','#'},
                              {'p','o'}};

map<char, short> mapDrawColor = {{'b',0},
                                {'w',1},
                                {'p',2}};

MapCell::MapCell(){
  setId('b');
}

bool MapCell::isBlocked(){
  if(id ==  'w'){
    return true;
  }

  return false;
}

void MapCell::setId(char iId){
  try
  {
    id = iId; 
    drawChar = mapDrawChar.at(iId);
    drawColor = mapDrawColor.at(iId);
  }
  catch(const std::exception& e)
  {
    std::cout << e.what() << '\n';
    std::cout << id << '\n';
  }
  
  
}

map<char,short> getMapDrawColor(){
  return mapDrawColor;
}