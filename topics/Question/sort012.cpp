#include<iostream>
using namespace std;
void sort012(int *arr,int n){
    int s = 0;
    int e = n-1;
    int m =0;
    while(m<=e){
        if(arr[m]== 0){
            swap(arr[s++],arr[m++]);
        }
        else if(arr[m]==1){
            m++;
        }
        else{
           swap(arr[m],arr[e]);
           e--;
        }
    }
}
 void display(int *arr , int n){
     for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
 }
int main(){
    int arr[] = {0,2,1,1,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort012(arr , n);
    display(arr,n);
    return 0;
}