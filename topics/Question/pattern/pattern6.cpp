#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int cnt = 1;
    for(int row = 1;row<=n;row++){
        for(int col = 1;col<=row;col++){
            cout<<cnt<<" ";
            cnt++;
        }
        cout<<endl;
    }
}
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10