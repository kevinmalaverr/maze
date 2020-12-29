#include <iostream>
#include <fstream>
#include <string>
// #include "saveLoadData.h"


using namespace std;

void saveData(string data){
  ofstream file("data.txt");

  if(file.is_open()){
    file << data;
  }

  file.close();
}

string loadData(){
  ifstream file("data.txt");
  string line;

  if(file.is_open())
  {
    while (getline(file,line))
    {
      
    }
    
  }

  return line;
}

