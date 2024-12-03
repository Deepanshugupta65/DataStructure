#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row = 1;row<=n;row++){
        int val = row;
        for(int col = 1;col<=row;col++){
            cout<<val<<" ";
            val = val-1;
        }
        cout<<endl;
    }
}
// 1
// 2 1 
// 3 2 1
// 4 3 2 1