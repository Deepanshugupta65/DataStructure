#include<iostream>
using namespace std;
   bool isCon(char &ch){
        if(ch>='a' && ch<='z' || ch>='A' && ch<='Z' ) return true;
        else return false;
    }
    char isalpha(char &ch){
        if(ch>='a' && ch<='z') return ch;
        else return ch = ch+32;
    }
   bool isPalindrome(string s) {
        int st =0;
        int e = s.size()-1;
        while(st<=e){
            if(isCon(s[st]) && isCon(s[e]) ){
                if(isalpha(s[st]) != isalpha(s[e])) return false;
                else{
                    st++;
                    e--;
                }
            }
            else{
                if(!isCon(s[st])) st++;
                if(!isCon(s[e])) e--;
            }
        }
        return true;
    }
int main(){
    string s = "0P";
    int ans = isPalindrome(s);
    cout<<ans<<endl;
}