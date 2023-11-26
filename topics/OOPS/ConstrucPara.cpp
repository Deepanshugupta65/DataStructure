#include<iostream>
using namespace std;
class Student{
    public:
    // s3 explanation are in notes it is default const-
    Student(){

    }
    // paramertric constructor for s2 and s1
    Student(int , int );
    
};
Student:: Student(int a , int b){
    cout<<"value a "<<a<<endl;
    cout<<"value b "<<b<<endl;
}
int main(){
    Student s1(10,20);
    Student s2(10,52);
    Student s3;
    return 0;
}