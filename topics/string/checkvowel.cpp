#include<iostream>
using namespace std;
bool check(char ch){
     if(ch =='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        return 1;
     }
     else return 0;
}
int main (){
    char ch;
    cout<<"enter a char"<<endl;
    cin>>ch;
    bool ans =check(ch);
    cout<<ans<<" ";
}