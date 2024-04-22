// #include<iostream>
// using namespace std;

// char alpha( char &ch){
//     if(ch>='a' && ch<='z') return ch;
//     else { return ch = ch+32;}
// }
// bool pallindrom(string s){
//     int start = 0;
//     int end = s.size()-1;
//     while(start<end){
//         // if(s[start]!=s[end]) return false;
//         if(alpha(s[start]) != alpha(s[end]) )  return false;
//         else if (!alpha(s[start])){
//             start++;
//         }
//         else if(!alpha(s[end])){
//             end--;
//         }
//         else {
//             start++;
//             end--;
//         }
//     }
//     return true;
// }

// int main(){
//     string s = "Noon";
//     int p=   pallindrom(s);
//     cout<<p<<endl;
// }


#include<iostream>
using namespace std;

char alpha( char &ch){
    if(ch>='a' && ch<='z') return ch;
    else { return ch = ch+32;}
}

bool isCond(char &ch){
    if(ch>='a'&& ch<='z'|| ch>='A' && ch<='Z'|| ch>='0' && ch<='9'){
        return true;
    }
    else {
        return false;
    }
}

bool pallindrom(string s){
    int start = 0;
    int end = s.size()-1;
    while(start<end){
     if(isCond(s[start]) && isCond(s[end])){
        if(alpha(s[start++]) != alpha(s[end--]) ){ 
             return false;
         }
     }
     else{
        if(!isCond(s[start])){
            start++;
        }
        else{
            end--;
        }
     }
    }
    return true;
}

int main(){
    string s = "N2i&nJA?a&jnI2n";
    int p=   pallindrom(s);
    string q = "Noo";
    int r = pallindrom(q);
    cout<<p<<endl;
    cout<<r<<endl;
}
