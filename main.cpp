#include <iostream>
using namespace std;


void drawMap(int posX,int posY,char gameMap[5][5]){
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      if(posX==j && posY==i){
        cout<<"H";
      }
      else{
	cout<<gameMap[i][j];
      }
    } 
    cout<<endl;
  }
}



int main(){

  int posX=0;
  int posY=0;
  char map[5][5]={{'0','0','0','0','0'},
		  {'0','0','0','0','0'},
		  {'0','0','0','0','0'},
		  {'0','0','0','0','0'},
		  {'0','0','0','0','0'}};
  char teclado;
  bool gameOver= false;

  drawMap(posX,posY,map);
  while(!gameOver){
  cin>>teclado;
  switch (teclado)
  {
  case 'a':
       posX-=1;
       break;
  case 'd':
	 posX+=1;
       break;
  case 'w':
         posY-=1;
       break;
  case 's':
         posY+=1;
       break;
  case 'p':
	 gameOver=true;
  default:
      break;
  }
  drawMap(posX,posY,map);
  }
 
 return 0;
}