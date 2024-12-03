#include<bits/stdc++.h>
using namespace std;

int maxArea(vector<int>&height){
   //  brute force 
        int mini = INT_MIN;
        int product =0;
        int maxi = 0;
        for(int i =0;i<height.size();i++){
            for(int j =i+1;j<height.size();j++){
                mini = min(height[i],height[j]);
                product = mini * (j-i);
                maxi = max(product , maxi);
                // product = max(product, min(height[j], height[i]) * (j - i));

            }
        }
        return maxi;
}
int main(){
    vector<int> height={1,8,6,2,5,4,8,3,7};
    int ans = maxArea(height);
    cout<<ans<<endl;
}
