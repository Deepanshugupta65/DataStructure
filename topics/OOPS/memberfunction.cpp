#include<iostream>
using namespace std;
class Student{
    private:
    int roll;
    char name[10];
    public:
    void getdata(void);
    void display(void){
        cout<<"name "<<name<<endl;
        cout<<"roll "<<roll<<endl;
    }
};
void Student::getdata(void){
    cout<<"enter a name "<<endl;
    cin>>name;
    cout<<"enter a roll num "<<endl;
    cin>>roll;
}
int main() {
    Student s1;
    s1.getdata();
    s1.display();
}