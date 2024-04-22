#include<iostream>
using namespace std;

void changetoupper(char &ch){
    ch = ch -32;
}
void changetolower(char &ch){
    ch = ch +32;
}
void toggle(string &s){
    string p;
    for(int i =0;s[i]!='\0';i++){
        if('a'<=s[i] && s[i]<='z'){
             changetoupper(s[i]);
        }
        else if('A' <= s[i] && s[i] <= 'Z'){
            changetolower(s[i]);
        }
    }
}

int main(){
    string s = "uyvyuvKNSN";
    toggle(s);
    for(int i =0;s[i]!='\0';i++){
        cout<<s[i] ;
    }
}