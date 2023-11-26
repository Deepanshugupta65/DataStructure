#include<iostream>
using namespace std;

bool isAlphabet(char c){
    return ((c>=65 && c<=90) || (c>=97 || c<=122));
}
int main(){
    char c;
    cout<<"enter a alpha"<<endl;
    cin>>c;
    bool a = isAlphabet(c);
    if(a){
        cout<<"yes"<<" ";
    }
    else{
        cout<<"not"<<" ";
    }
    return 0;
}