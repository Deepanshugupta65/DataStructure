#include<iostream>
using namespace std;

void remove(string str){
    string ans="";
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u'){
            ans += str[i];
        }
    }
    cout << ans << " ";
}

int main(){
    string str = "deepans";
    remove(str);
    return 0;
}
