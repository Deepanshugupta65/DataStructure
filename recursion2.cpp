// #include<iostream>
// using namespace std;
// void saydigit(int n , string arr[]){
//     // base case 
//    if( n ==0)
//       return ;

//     // processing 
//     int digit = n % 10;
//     n = n/10;


//     // recursive call
//     saydigit(n, arr);
//     cout<<arr[digit]<<endl;

// }
// int main(){
//     string arr[10] = {"zero" ,"one","two" ,"three","four","five","six","seven",
//                     "eight","nine"};
//     int n;
//     cin>>n;
//     saydigit(n , arr);
//     cout<<endl;  
//     return 0;              
// }

// merege two sorted array 


#include<iostream>
#include<vector>
using namespace std;
void mergesort(int arr1[],int n,int arr2[],int m,int arr3[]){
    int i =0,j=0,k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
          
        }
        else{
            arr3[k++]=arr2[j++];
    
        }
    }
    while(i<n){
        arr3[k++] = arr1[i++];
    }
    while(j<m){
        arr2[k++] = arr2[j++];

    }
}
void print(int ans[],int n){
    for(int i =0;i<n;i++){
        cout<<ans[i]<< " ";
    }cout<<endl;
}
int main(){
    int arr1[5] ={7,8,9,10,11};
    int arr2[3]={1,2,3};
    int arr3[3] = {0};
    mergesort(arr1,5 , arr2, 3,arr3 );
    print(arr3,8);
    return 0;
}