#include<iostream>
using namespace std;
class Obj{
   public:
   int a;
   private:
   int b;
   int c;
   public:
   
   void setb(int d){
    b = d;
   }
   int getb(){
    return b;
   }
};
int main(){
    Obj p;
    p.a = 10;
    cout<<"value of a "<<p.a<<endl;
    p.setb(20);
    cout<<"value of b "<<p.getb()<<endl;

    // dynamically
    Obj *q = new Obj;
    q-> setb(12);
    cout<<"dynamic "<<(*q).getb()<<endl;

}