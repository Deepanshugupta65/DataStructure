#include<bits/stdc++.h>
using namespace std;
void count(string s){
    char ch ='a';
    unordered_map<char, char> p;
    for(int i =0;i<s.size();i++){
      if(s[i]!=' '){
        p[s[i]] = ch;
        ch++;
      }
    }
    for(auto i:p){
        cout<<i.first<<i.second<<endl;
    }
}
int main(){
    string s = "the  vlk kja svkl";
    count(s);
}