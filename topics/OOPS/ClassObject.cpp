#include<iostream>
using namespace std;

class Hero{
    // properties
    public:
  char name;
  int health;
  int lvl;
};
int main(){
    // object
      Hero h1;
    //   inialize 
    h1.health = 45;
    h1.lvl = 1;
    h1.name ='L';
      cout<<"health is : "<<h1.health<<endl;
      cout<<"level is :"<<h1.lvl<<endl;
}