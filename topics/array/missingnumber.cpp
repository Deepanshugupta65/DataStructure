#include<iostream>
using namespace std;
int number(int arr[],int n){
    int cnt = 1;
    for(int i =0;i<n;i++){
        if(arr[i] == cnt){
            cnt++;
        }
        else
        return i+1;
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
   int s = number(arr,n);
   cout<<s<<endl;
}