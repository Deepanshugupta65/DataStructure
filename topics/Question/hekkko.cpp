// #include<iostream>
// using namespace std;
// void fun(int arr[],int n){
//     int min_element = arr[0];
//     int max_element = arr[0];
//     for(int i =1;i<n;i++){
//         if(max_element<arr[i]){
//             max_element=arr[i];
//         }
//         if(min_element>arr[i]){
//             min_element = arr[i];
//         }
//     }
//     cout<<"max "<<max_element<<endl;
//     cout<<"min "<<min_element<<endl;
// }
// int main(){
//     int arr[5];
//     cout<<"enter the element of arrray";
//     for(int i =0;i<5;i++){
//         cin>>arr[i];
//     }
//     fun(arr,5);
//     return 0;
// }


// binary search
// #include<iostream>
// using namespace std;
// int search(int arr[],int start,int end,int key){
//     // base case
//     if(start>end){
//         return -1;
//     }
//     int mid = (start+end)/2;
//     if(arr[mid]==key){
//         return mid;
//     }
//     else if(arr[mid]<key){
//         return search(arr,mid+1,end,key);
//     }
//     else{
//         return search(arr,start,mid-1,key);
//     }
// }

// int main(){
//     int arr[] = {2,3,4,5,6};
//     int start = 0;
//     int end = 4;
//     int key = 5;
//     int val =search(arr,start,end,key);
//     cout<<val;
//     return 0;
// }

