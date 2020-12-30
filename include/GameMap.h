#ifndef GAMEMAP_H
#define GAMEMAP_H

#include "MapCell.h"
#include <map>

using namespace std;

class GameMap {
  public:
    GameMap();
    MapCell cells[15][10];
    void draw();

    // gets players coords an update the map
    bool setPlayerCell(int px, int py);

    void initColorPair();

    // pointer for player

    const short VOID_PAIR = 0;
    const short WALL_PAIR = 1;
    const short PLAYER_PAIR = 2;

    MapCell* playerCell;
    map<char, short> colorMap = {{'b',0},{'#',1}, {'0',2}};

  protected:
    void loadMapFromFile();

    // colors
    

    // map
};

#endif
