#include<iostream>
#include<vector>
using namespace std;
void concatinate(int arr[],int n){
    vector<int> ans;
    for(int i =0;i<2*n;i++){
        ans.push_back(arr[i%n]);
    }
    for(int i =0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    concatinate(arr,n);
    return 0;
}