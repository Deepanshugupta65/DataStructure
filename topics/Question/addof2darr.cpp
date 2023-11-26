#include<iostream>
using namespace std;
int main(){
    int matA[100][100],matB[100][100];
    cout<<"enter a value of matrices of a"<<endl;
    for(int i =0;i<3;i++){
        for(int j =0;j<3;j++){
            cin>>matA[i][j];
        }
    }

    cout<<"enter a value of matrices of b"<<endl;
    for(int i =0;i<3;i++){
        for(int j =0;j<3;j++){
            cin>>matB[i][j];
        }
   }
   int sum[100][100];
   for(int i =0;i<3;i++){
    for(int j =0;j<3;j++){
        sum[i][j] = matA[i][j] + matB[i][j];
    }
   }

//    display of number 
 for(int i =0;i<3;i++){
    for(int j =0;j<3;j++){
        cout<<sum[i][j]<< " ";
    }
    cout<<endl;
 }
  return 0;
}