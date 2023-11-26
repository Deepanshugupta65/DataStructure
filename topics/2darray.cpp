// 2d array introduction

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][4];
//     // taking input at row wise
//     /*
//     for(int row=0;row<3;row++){
//         for(int col =0;col<4;col++){
//             cin>>arr[row][col];
//         }
//     }
//     */
// //    taking input at col wise
//      for(int col=0;col<4;col++){
//         for(int row =0;row<3;row++){
//             cin>>arr[row][col];
//         }
//      }
//     // for output input
//     for(int i =0;i<3;i++){
//         for(int j=0;j<4;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

// }

/*

// sum of row and col wise 
#include<iostream>
using namespace std;
int main(){
    
    int arr[3][3] ;
    for(int i =0;i<3;i++){
        for(int j =0;j<3;j++)
        cin>>arr[i][j];
    }
    // row wise  addition
    
     for(int i =0;i<3;i++){
        int sum =0;
        for(int j =0;j<3;j++)
        sum = sum +arr[i][j];
       cout<<sum<<" "<<endl;
         
    }
    // col wise addition
    cout<<"lets print columns wise indexig"<<" ";
    for(int j =0;j<3;j++){
        int sum =0;
        for(int i =0;i<3;i++){
            sum = sum +arr[i][j];
        }
            cout<<sum<<" ";
        }
        cout<<endl;
    return 0;
}
*/

// largest row in 2d array
#include<iostream>
#include<climits>
using namespace std;
int main(){
      int arr[3][3] ;
      int maxi = INT_MIN;
    for(int i =0;i<3;i++){
        for(int j =0;j<3;j++)
        cin>>arr[i][j];
    }
     for(int i =0;i<3;i++){
        int sum =0;
        for(int j =0;j<3;j++){
        sum = sum +arr[i][j];
        }
        if(sum>maxi){
            maxi= sum;
        }
        
    }
        cout<<maxi<<endl;  
    return 0;
}