#include<bits/stdc++.h>
using namespace std;

void removespace(string &s){
    vector<char> ans;
    for(int i = 0; s[i]; i++){
        if(s[i] != ' '){
          ans.push_back(s[i]);
        }
    }
    for(int i =0;i<ans.size();i++){
        cout<<ans[i];
    }
     // Resize the string to the new length
}

int main(){
    string s = "geek sk knv njsk  kj n   ksm";
    removespace(s);
    // cout << s << endl;
    return 0;
}
