#include<iostream>
#include<vector>
using namespace std;
vector<int> spiral(vector<vector<int>>& m){
    int row = m.size();
    int col =m[0].size();
    int startrow = 0;
    int endrow = row-1;
    int startcol = 0;
    int endcol = col-1;
    int total = row * col;
    int count=0;
    vector<int> ans;
     while(count<total){
          // first row
    for(int idnex =0; idnex<=endcol;idnex++){
         ans.push_back(m[startrow][idnex]);
         count++;
    } 
        startrow++;
    // last col
    for(int index = startrow;index<=endrow;index++){
        ans.push_back(m[index][endcol]);
        count++;
    }
    endcol--;
    // last row
    for(int index = endcol;index>=startrow;index--){
        ans.push_back(m[endcol][index]);
        count++;
    }
    endrow--;
    for(int index = endrow;index>=startrow;index--){
        ans.push_back(m[index][startcol]);
        count++;
    }
    startcol++;
     }
     return ans;
}
int main(){
      vector<vector<int>> M = {{1, 2, 3, 4},
                             {5, 6, 7, 8},
                             {9, 10, 11, 12}};

    vector<int> result = spiral(M);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}