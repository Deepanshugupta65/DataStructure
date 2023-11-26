#include<iostream>
using namespace std;
void sort(int *arr , int n){
    int s =0;
    int e = n-1;
    while(s<=e){

        if(arr[s]<0){
            s++;
        }
     else if(arr[s]>0 && arr[e]<0){
            swap(arr[s],arr[e]);
            s++;e--;
        }
        else{
            e--;
        }
    }
}

//  void display(int *arr , int n){
     
//  }
int main(){
    int arr[] = {2,-3,4,-1,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,n);
    // display(arr , n);
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}