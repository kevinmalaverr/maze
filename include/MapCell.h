#ifndef MAPCELL_H
#define MAPCELL_H

#include <map>

class MapCell{
  public:
    MapCell();
    char id;
    char drawChar;
    char drawColor;
    bool isBlocked();
    void setId(char iId);
};

std::map<char, short> getMapDrawColor();

#endif