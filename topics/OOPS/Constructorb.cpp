#include<iostream>
using namespace std;
// outside constuctor
class Student{
    private:
    int roll;
    public:
    Student(); 
};
Student::Student(){
    roll = 45;
    cout<<"roll num is "<<roll<<endl;
}
int main(){
    Student s1;
    return 0;
}