#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the alphabet"<<endl;
    cin>>ch;
    if((ch>=65 && ch<=95) || (ch>=97 && ch<=122)){
        cout<<"the given charachter is alphabet "<<ch<<endl;
    }
    // if((ch>='a'&&ch<='z')||(ch<='A'&&ch<='Z')){
    //     cout<<"checked for charachter"<<endl;
    // }
    else{
        cout<<"no it is not alphabats"<<endl;
    }
}