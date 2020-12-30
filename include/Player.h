#ifndef PLAYER_H
#define PLAYER_H

class Player
{
  public:
    Player();
    void callInput();
    void resetToLastPosition();
    int x, y;
    int lastX, lastY;

  
  protected:
};

#endif