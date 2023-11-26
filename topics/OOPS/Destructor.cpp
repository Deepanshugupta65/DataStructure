#include<iostream>
using namespace std;
class Student{
    private:
    int roll,mark;
    char name[20];
    public:
    Student();
    ~Student();
    void read();
    void display();
};
Student::Student(){
    cout<<endl<<" auto constructor call"<<endl;
}
void Student::read(){
    cout<<"enter name"<<endl;
    cin>>name;
    cout<<"enter roll "<<endl;
    cin>>roll;
    cout<<"enter mark"<<endl;
    cin>>mark;
}
void Student::display(){
    cout<<"name"<<name<<endl;
    cout<<"roll num"<<roll<<endl;
    cout<<"mark"<<mark<<endl;
}
Student::~Student(){
    cout<<"auto matic destructor is called"<<endl;
}
int main(){
    {
        Student s1;
        s1.read();
        s1.display();
    }
    Student s2;
    s2.read();
    s2.display();
    return 0;
}