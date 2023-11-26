#include<iostream>
using namespace std;

class Add{
    private:
    int a,b;
    void getsum(void);
    friend int add(void);
};
void Add::getsum(void){
    cout<<"enter the num"<<endl;
    cin>>a>>b;
}
int add(void){
    Add s1;
    int temp;
    s1.getsum();
    temp = s1.a +s1.b;
    return temp;
}
int main(){
    int result;
    result = add();
    cout<<"sum is "<<result<<endl;
    return 0;
}