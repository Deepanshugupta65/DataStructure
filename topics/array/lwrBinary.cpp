#include<iostream>
using namespace std;
int solve(int arr[],int size,int key){
     int ans = size;
     int start = 0;
     int end = size-1;
    int mid = (start +end)/2;
     while(start<=end){
        if(arr[mid]>=key){
           ans = mid;
           end = mid -1;
        }
        else if(arr[mid]<key){
              start = mid +1;
        }
        else if(arr[mid]>key){
           end = mid -1; 
        }  
        mid = (start + end) /2;
     }
     return ans;
}
int main(){
    int arr[] = {3,5,8,15,19,19,19};
    int size = 7;
    int key = 12;
    cout<<solve(arr,size,key)<<endl;
    return 0;
}