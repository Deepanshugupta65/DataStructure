#include<iostream>
using namespace std;
int binary(int arr[],int n,int key){
    int s = 0;
    int e = n-1;
    int mid = (s+e)/2;
    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = (s+e)/2;
    }
    return -1;
}
int main(){
    int arr[] = {2,3,4,5,6,7};
    int n = 6;
    int k = 3;
    int m =binary(arr,n,k);
    cout<<"index of 3"<< m<<endl;
    return 0;
}