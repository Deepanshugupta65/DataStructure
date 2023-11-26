#include<iostream>
using namespace std;
int main(){
    int arr[3][3] = {{2,4,4},{5,6,7},{7,8,9}};
    // sum of row
    for(int i =0;i<3;i++){
        int rowSum = 0;
        for(int j =0;j<3;j++){
            rowSum = arr[i][j] + rowSum;
        }
        cout<<rowSum<<endl;
    }

    cout<<"here is column sum"<<endl;
    // sum of column 
    for(int i =0;i<3;i++){
        int colsum = 0;
        for(int j =0;j<3;j++){
            colsum = arr[j][i]+colsum;
        }
        cout<<colsum<<endl;
    }
};