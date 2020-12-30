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
    MapCell* playerCell;

  protected:
    void loadMapFromFile();
};

#endif
