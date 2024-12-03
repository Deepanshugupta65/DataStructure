#include<bits/stdc++.h>
using namespace std;
int  major(int arr[],int n){
    map<int,int> mp;
    for(int i =0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto it:mp){
        if(it.second > n/2){
            return it.first;
        }
    }
    return -1;
}

// brute force otpimal in leetcode by moore voting algo
int main(){
    int arr[] = {2,3,3,3,1,3,2};
    int n = 7;
    int s =major(arr,n);
    cout<<s<<" ";
    return 0;

}