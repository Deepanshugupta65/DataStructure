#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>& price){
    int n = price.size();
    int buy = price[0];
    int max_profit = 0;
    for(int i =1;i<n;i++){
        // for cheap price
        if(buy > price[i]){
            buy= price[i];
        }
        else if(price[i] - buy>max_profit){
            max_profit = price[i] - buy;
        }
    }
    return max_profit; 
} 
int main(){
    vector<int> price = {7,1,5,3,6,4};
    int ans = maxProfit(price);
    cout<<ans<<endl;
    return 0;
}