#include<iostream>
using namespace std;
void rotatearrayleft(int arr[],int n ,int k){
    k = k%n;
    int temp[k];
    for(int i = 0;i<k;i++){
        temp[i] = arr[i];
    }
    for(int i =k;i<n;i++){
        arr[i-k] = arr[i];
    }
    for(int i = n-k;i<n;i++){
        arr[i] = temp[i-(n-k)];
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = 7;
    int k = 3;
    rotatearrayleft(arr,n,k);
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}