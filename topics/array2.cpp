// //  pair sum its not coorect 
// #include<bits/stdc++.h>
// // #include<iostream>
// #include<vector>
// using namespace std;
// int pairsum(int arr[] ,int n ,int s){
//     std::vector<vector<int> >ans;
//       for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]+arr[j]==s){
//                 vector<int>temp;
//                 temp.push_back(min(arr[i],arr[j]));
//                 temp.push_back(max(arr[i],arr[j]));
//                 ans.push_back(temp);
//             }
//         }
//     }
//     sort(ans.begin(),ans.end());
//     return ans;
// }
// int main(){
//     int arr[] ={1,2,3,4,5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int s=5;
//     pairsum(arr ,n ,s);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
// */
// // 
// /*
// #include<iostream>
// using namespace std;
// int triplet(int arr[],int n,int s)
// {
//     for(int i=0;i<n;i++){
//         int sum = arr[i]+arr[i++];
//         for(int j=n-1;j>0;j--){
//             if(sum+arr[j]==s){
//                 return 1;
//             }
//             else{
//                 return -1;
//             }
//         }
//     }
//    return; 
// }
// int main(){
//     int arr[] ={1,4,45,6,7,8};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int s=13;
//      int num= triplet(arr ,n ,s);
//      cout<<"fsndfn"<< num<<endl;
//     return 0;
// }
