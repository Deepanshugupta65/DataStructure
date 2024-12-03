#include<iostream>
using namespace std;
int checksorted(int arr[],int n){
    for(int i =0;i<n;i++){
        if(arr[i]<=arr[i+1]){
            continue;
        }
        else
        return 0;
    }
    return 1;
}
int main(){
    int arr[] = {1,2,2,4,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int s =checksorted(arr,n);
    cout<<s<<" ";
    return 0;
}