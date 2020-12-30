#ifndef GAMEMAP_H
#define GAMEMAP_H

#include "MapCell.h"

class GameMap {
  public:
    GameMap();
    MapCell cells[15][10];
    void draw();

    // gets players coords an update the map
    void setPlayerCell(int px, int py);

    // pointer for player
    MapCell* playerCell;

  protected:
    void loadMapFromFile();
};

#endif
