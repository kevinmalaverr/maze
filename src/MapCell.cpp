#include "MapCell.h"

MapCell::MapCell(){
  id = ' ';
}

bool MapCell::isBlocked(){
  if(id == '1'){
    return true;
  }

  return false;
}