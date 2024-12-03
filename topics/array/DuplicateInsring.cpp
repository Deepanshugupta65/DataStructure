#include<bits/stdc++.h>
using namespace std;
void duplicatestring(string s){
    int n = s.length();
    sort(s.begin(),s.end());
    for(int i =0;i<n;i++){
        int cnt = 1;
        // it count the number of string 
        while(s[i] == s[i+1] && i<n){
            cnt++;
            i++;
        }
        // it will give the output of string
        if(cnt >1){
            cout<<s[i]<<" "<<cnt<<endl;
        }
    }
}
int main(){
    string s = "test string";
    duplicatestring(s);
    return 0;
}