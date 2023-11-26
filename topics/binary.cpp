// #include<iostream>
// using namespace std;
// int binary(int arr[], int size , int key){
//     int u=0;
//     int l=size -1;
//     int mid = u+(l-u)/2;
//     while(u<=l){
//         if(arr[mid]==key){
//             return mid;
//         }
//          if(arr[mid]<key){
//             u=mid +1;
//         }
//         else{
//             l=mid -1;;
//         }
//         mid = u+(l-u)/2;
//     }
//     return -1;
// }
// int main(){
//     int arr[5]={2,4,6,8,10};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     int index =  binary(arr , n, 10);
//     cout<<"index of 10 "<<index<<endl;
//     return 0;
// }

// find left and right most occuerence 

/*
#include<iostream>
using namespace std;
int firstocc(int arr[], int n, int key){
      int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int lastocc(int arr[], int n, int key){
      int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            s =mid + 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}
int main(){
    int arr[5]={2,2,3,3,4};
    cout<<"index of 3 "<<firstocc(arr , 5, 2)<<endl;
    cout<<"index of last of 3  "<<lastocc(arr , 5, 2)<<endl;
    return 0;
}

*/

// find pivot in an sorted & rotated array using Binary search 


#include<iostream>
using namespace std;

int pivotele(int arr[], int n){
    int s =0 , e = n-1;
    int mid = s + (e-s)/2;
    while (s<e)
    {
        /* code */
        if(arr[mid]>=arr[0])
        s =mid +1;
        else
        e = mid;
        mid = s +(e-s)/2;
    }
    return s ;
    
}

int main(){
    int arr[5] ={3,8 ,10,17,1};
    cout<<"pivot element if"<<pivotele(arr , 5)<<endl; 
}