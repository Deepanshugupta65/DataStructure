#include<bits/stdc++.h>
using namespace std;
void sortzero(int arr[],int n){
    vector<int> temp;
    for(int i =0;i<n;i++){
        if(arr[i]!=0)
        temp.push_back(arr[i]);
    }
    for(int i =0;i<temp.size();i++){
        arr[i] = temp[i];
    } 
    int s = temp.size();
    for(int i = s;i<n;i++){
        arr[i] = 0;
    }
}
int main(){
    int arr[] = {1,0,1,0,2,1,0,3,4,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    sortzero(arr , n);
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}