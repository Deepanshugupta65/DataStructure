#include<bits/stdc++.h>
using namespace std;
   bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int startrow = 0;
        int endrow = row - 1;
        int endcol = col-1;
        while(startrow <= endrow){
            int start = startrow;
            int col = endcol;
            int mid = (start + col)/2;
            while(start<=col){
                int val = matrix[start][mid];
                if(val == target){
                    return true;
                }
                else if(val<target){
                    start = mid + 1;
                }
                else{
                    col = mid -1;
                }
                mid = (start +col)/2;
            }
            startrow++;
        }
        return false;
    }
int main(){
       vector<vector<int>> M = {{1,4,7,11,15},
                              {2,5,8,12,19},
                              {3,6,9,16,22}};

    bool result = searchMatrix(M, 9);

    cout << result << endl;

    return 0;
}