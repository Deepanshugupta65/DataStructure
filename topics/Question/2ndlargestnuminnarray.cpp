#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {3,4,1,5,9,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int largest = arr[0];
    int minimum = arr[0];
    for(int i =1;i<n;i++){
    if(largest<arr[i]){
        largest = arr[i];
    }
 }
  for(int i =0;i<n;i++){
        if(minimum>arr[i]){
            minimum = arr[i];
        }
    }
    cout<<largest<<minimum<<endl;
 int seclargest = -1;
int secmin = INT_MAX;
 for(int i =0;i<n;i++){
    if(seclargest<arr[i] && arr[i]!= largest){
        seclargest = arr[i];
    }
 }
 for(int i =0;i<n;i++){
    if(secmin>arr[i] && arr[i]>minimum){
        secmin= arr[i];
    }
 }
 cout<<"2nd largest element"<<seclargest<<endl;
 cout<<"2nd second element "<<secmin<<endl;
}