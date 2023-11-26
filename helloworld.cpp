#include<iostream>
using namespace std;

class student{
    public :
    int rollnum;
    private:
    int age;
    public:
    // default constructor
    student(){
        cout<<"constructor called"<<endl;
    }
    //parametrized 
    student(int r){
        cout<<"constrctor 2"<<endl;
        rollnum=r;
    }
    //
    student(int a,int r){
        cout<<"this : "<<this<<endl;
        cout<<"constructor called"<<endl;
        age = a;
        rollnum = r;
    }
    void display()
    {
        cout<<age<<" "<<rollnum<<endl;
    }
    int getAge(){
        return age;
    }
    void setAge(int a,int password){
        if(password != 123){
            return;
        }
        if (a<0){
            return;
        }
        age = a;
    }

};
/*
int main(){
    student s1;
    s1.display();
    student s2;
    
    student *s3 = new student;
    s3->display();

    cout<<"parametrized constructor demo "<<endl;
    student s4(10);
    s4.display();

    student s6(20,102);
    cout<<"cons 3 called"<<endl;
    s6.display();
}
*/
/*int main(){
    student s1;
    student *s2 = new student;
    s1.setAge(20);
    s2->setAge(24);
    s1.display();
    s2->display();
}*/
/*
int main()
{
    //statically alloctaion
student s1;
student s2;
  //  s1.age=14;
    s1.rollnum=45;
    //s2.rollnum=47;
    cout<<"s1 age :"<<s1.getAge<<endl;
    cout<<"s1 rollnum :"<<s1.rollnum<<endl;
     s1.display();
     s2.display();
    //s2.age=15;

    // dyanmically allocation
    student *s6 = new student;
  // (*s6).age=47;
   (*s6).rollnum=54;
   (*s6).display();
   cout<<"s6 age :"<<s6->getAge<<endl;
   s6->rollnum=104;
   s6->display();
}*/

int main(){
    student s1(10,155);
    cout<<" address of this"<<&s1<<endl;
}