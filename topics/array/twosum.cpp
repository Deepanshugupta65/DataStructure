#include<bits/stdc++.h>
using namespace std;
 vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> ans;
    int q = nums.size();
    for(int i =0;i<q;i++){
        for(int j =i+1;j<q;j++){
            if(nums[i]+nums[j]==target)
            cout<<i<<"  "<<j<<endl;
        }
    }
    return {-1,-1};
}
int main(){
    vector<int>nums ={7,5,7,8,9};
    int n = 17;
    twoSum(nums,n);
    return 0;
}