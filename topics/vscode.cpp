#include<iostream>
using namespace std;
char getchange(char ch){
    if(ch>='a' && ch<='z')
    return ch-32;
    else
    return ch-'A'+'a';
}
int getToggle(char name[],int size){
    for(int i =0;i<size;i++){
        char ch = name[i];
        if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z'))
        name[i] = getchange(ch);
    }
    return name;
}
int main(){
    char name[20];
    cin>>name;
    getToggle(name,8);
    cout<<name<<endl;
}