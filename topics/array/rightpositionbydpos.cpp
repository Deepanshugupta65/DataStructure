#include<iostream>
using namespace std;
void rotatearrayright(int arr[],int n,int d){
    d = d%n;
    int temp[d];
    for(int i = n-d;i<n;i++){
        temp[i-(n-d)] = arr[i];
    }
    for(int i =1;i<=n-d;i++){
        arr[n-i] = arr[n-d-i];
    }
    for(int i =0;i<d;i++){
        arr[i] = temp[i];
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = 7;
    int k = 3;
    rotatearrayright(arr,n,k);
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}