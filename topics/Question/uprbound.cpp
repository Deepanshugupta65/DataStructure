#include<iostream>
using namespace std;
int solve(int arr[],int size , int key){
    int start = 0;
    int end = size -1;
    int ans = size;
    int mid = (start +end)/2;
    while(start<=end){
        if(arr[mid]>key){
            ans = mid;
            end = mid -1;
        }
        else {
            start = mid+1;
        }
        // else if(key<arr[mid]){
        //     end = mid -1;
        // }
        mid = (start +end)/2;
    }
    return ans;
}
int main(){
    int arr[] = {2,3,6,7,7,8,9,9,9,9};
    int size = 10;
    int key = 2;
    cout<<"begin"<<endl;
    cout<<solve(arr,size,key)<<endl;
   return 0; 
}
