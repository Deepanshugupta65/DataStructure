#include<iostream>
using namespace std;
int main(){
    int n,i;
    int x =2;
    cin>>n;
    while(n){
        for(i =2;i<x;i++)
        if(x%i==0){
            break;
        }
        if(i==x){
        cout<<x<<" ";
        n--;
        }
        x++;
    }
    return 0;
}