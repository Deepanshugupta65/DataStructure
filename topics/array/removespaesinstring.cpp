#include<iostream>
using namespace std;
void removespace(char *str){
    int cnt =0;
    for(int i =0;str[i];i++){
        if(str[i] != ' '){
        str[cnt++] = str[i];
        }
    }
    str[cnt] ='\0';
}
int main(){
    char str[]="g  eek fo r geek";
    removespace(str);
    cout<<str<<endl;
    return 0;
}