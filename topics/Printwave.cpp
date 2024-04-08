#include<bits/stdc++.h>
using namespace std;
vector<int> printwave(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;
    for(int j =0;j<mCols;j++){
     if(j%2==0){
         for(int i=0;i<nRows;i++ ){
             ans.push_back(arr[i][j]);
         }
     }
     else {
         for(int i=nRows-1;i>=0;i--){
             ans.push_back(arr[i][j]);
         }
     }
    }
    return ans;
}
int main(){
      vector<vector<int>> M = {{1, 2, 3,4},
                             {5, 6, 7,5},
                             {9, 10, 11,6}};

    vector<int> result = printwave(M , 3,4 );

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}