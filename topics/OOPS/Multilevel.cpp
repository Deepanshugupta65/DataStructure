#include<iostream>
using namespace std;
class Student{
    public:
    int age;
    int roll;
};
class  Teacher:public Student{
    public:
    void printage(){
        cout<<"teacher age"<<endl;
    }
};
// multilevel
class Worker:public Teacher{
  public:
  int salary;   
};
// multiple
class Hybrid :public Student , public Worker{
    public:
    int gender;
}
int main(){
    Worker w1;
    cout<<w1.roll<<endl;
    // multiple
    cout<<w1.printage<<endl;
    return 0;
}