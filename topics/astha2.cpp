#include<bits/stdc++.h>
using namespace std;
void bubblesort(int arr[],int n ){
  for(int i =0;i<n;i++){
    for(int j =0;j<n-i-1;j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
      }
    }
  }
}
int main(){
  int arr[] = {10,1,7,6,14,5};
  int n = 6;
  bubblesort(arr , n);
  for(int i =0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}