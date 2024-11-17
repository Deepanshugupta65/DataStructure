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
        }
    }
    cout<<"maximum frequncy "<<maxi<<endl;
    for(auto i:m){
        if(maxi == i.second)
        ans = ans + maxi;
    }
    cout<<ans<<endl;
}
int main(){
    int arr[] = {1,2,2,3,1,4 , 2};
    int n = 7;
    count(arr,n);
}