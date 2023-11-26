#include<iostream>
using namespace std;
// inside constructor and default constuctor 
class Student{
    private:
    int roll;
    public:
    Student(){
      roll = 10;
     cout<<"roll num"<<roll<<endl;
    }
};
int main(){
    Student s1;
}