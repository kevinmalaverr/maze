#include "MapCell.h"

MapCell::MapCell(){
  id = ' ';
}

bool MapCell::isBlocked(){
  if(id ==  '#'){
    return true;
  }

  return false;
}