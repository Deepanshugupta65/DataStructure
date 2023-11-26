#include<iostream>
using namespace std;

class Human{
    public:
    int age;
    int color;
    int weight;
    public:
    int getage(){
        return this -> age;
    }
    void setweight(int d){
        this ->weight = d;
    }
};
class Male : public Human{
    public:
    string naam;
    void sleep(){
        cout<<"color can be accessed "<<endl;
    }
};
int main(){
   Male h1;
   cout<<h1.age<<endl;
   cout<<h1.color<<endl;
   cout<<h1.weight<<endl;
   cout<<h1.naam<<endl;
   h1.sleep();
   return 0;
}