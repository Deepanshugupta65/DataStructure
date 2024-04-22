#include<iostream>
using namespace std;

// void remove(string &str){
//     string ans ="";
//     for(int i =0;str[i]!='\0';i++){
//         if(str[i]!=' '){
//             ans = ans + str[i];
//         }
//     }
//     cout<<"ans "<<endl;
//     cout<<ans<<endl;
// }
void remove(char str[]){
    int cnt =0;
    for(int i =0;str[i]!='\0';i++){
        if(str[i]!=' '){
            str[cnt++] = str[i];
        }
    }
    str[cnt] = '\0';
    cout<<str<<endl;
}
int main(){
    char str[] = "dee  pan  sjn  ";
    remove(str);
    cout<<str<<endl;
    return 0;
}