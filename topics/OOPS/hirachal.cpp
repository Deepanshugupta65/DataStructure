#include<iostream>
using namespace std;
class A{
    public:
    int age;
};
class B : public A{
    public:
    int roll;
};
class C: public A{
    public:
    int mark;
};
int main(){
    C a;
    a.age;
    B b;
    b.roll;
}