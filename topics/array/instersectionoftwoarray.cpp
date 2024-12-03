#include<bits/stdc++.h>
using namespace std;
int intersection(int arr1[],int arr2[],int m ,int n){
    vector<int> ans;
    for(int i = 0;i<m;i++){
        int temp = arr1[i];
        for(int j =0;j<n;j++){
            if(temp == arr2[j]){
                ans.push_back(temp);
                arr2[j] = -1;
                break;
            }
        }
    }
    for(int i =0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
int main(){
    int arr1[] = {3,4,5,6,8,9};
    int arr2[] = {3,4,5,6,7};
    int m =6;
    int n = 5;
    intersection(arr1 , arr2 ,m,n );
    return 0;
}