#include<iostream>
using namespace std;
class Student{
    int roll;
    int mark;
    public:
    // paramertrized constructor
    Student(int a,int b){
        roll = a;
        mark = b;
    }
    // copy constructor inside also possible outside by ::
    Student(Student &c){
        roll = c.roll;
        mark =c.mark;
    }
    void Showdata(){
        cout<<"roll "<<roll<<endl;
        cout<<"mark "<<mark<<endl;
    }
};
int main(){
    Student s1(10,20);
    s1.Showdata();
    // copy constructor
    Student s2(s1);
    s2.Showdata();
}