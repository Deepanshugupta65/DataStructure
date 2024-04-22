#include<bits/stdc++.h>
using namespace std;
// count frenquency 4 1 , 3  1, 2 2 , 1 2
void count(int arr[],int n){
    unordered_map<int,int> m;
    for(int i =0;i<n;i++){
        m[arr[i]]++;
    }
    // print frequency
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    int maxi = INT_MIN;
    int ans =0;
    for(auto i:m){
        if(i.second>maxi){
        maxi = i.second;
        ans = i.first;
        }
    }
    cout<<"maximum freq  "<<ans<<endl;
}
int main(){
    int arr[] = {1,1,2,3,1,4};
    int n = 6;
    count(arr,n);
}