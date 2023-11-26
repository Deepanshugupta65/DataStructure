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

int main(){
    Teacher s1;
    cout<<s1.age<<endl;
}