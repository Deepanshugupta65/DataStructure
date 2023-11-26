#include<iostream>
using namespace std;
int floor(int *arr,int key,int size){
    int start = 0;
    int end = size-1;
    int ans = -1;
    int mid = (start+end)/2;
    while(start<=end){
        if(arr[mid]<=key){
            ans = arr[mid];
            start = mid +1;
        }
         else {
         end = mid-1;
        }
        // else if(arr[mid]>key){
        //    end = mid -1; 
        // }  
        mid = (start + end) /2;
    }
  return ans;
}

// upr bound
int ceil(int *arr,int key, int size){
    int start = 0;
    int end = size -1;
    int ans1 = -1;
    int mid = (start +end)/2;
    while(start<=end){
        if(arr[mid]>=key){
            ans1 =arr[mid];
            end = mid -1;
        }
        else {
            start = mid+1;
        }
       
        mid = (start +end)/2;
    }
    // cout<<arr[ans1]<<endl;
    return ans1;
}
int main(){
    int arr[] ={10,20,30,40,50};
    int key = 30;
    int size = 5;
    cout<<"floor "<<floor(arr,key,size)<<endl;
    cout<< "ceiling "<<ceil(arr,key,size)<<endl;
}