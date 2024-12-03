#include<bits/stdc++.h>
using namespace std;

// int unionarray(int arr1[],int arr2[],int n , int m){
//      set<int> s;
//         for(int i =0;i<n;i++){
//             s.insert(arr1[i]);
//         }
//         for(int i =0;i<m;i++){
//             s.insert(arr2[i]);
//         }
//         for (auto& str : s) {
//         std::cout << str << ' ';
//     }
// }
// int main(){
//     int arr1[] = {1,1,2,3,4,5,5};
//     int arr2[]= {2,3,4,4,5,6};
//     int n =7;
//     int m =6;
//     unionarray(arr1,arr2,n,m);
// }
//   by using set aand vector and set return valyeb 


//   set<int> s;
//         vector<int> b;
//         for(int i =0;i<n;i++){
//             s.insert(arr1[i]);
//         }
//         for(int i =0;i<m;i++){
//             s.insert(arr2[i]);
//         }
//         for(auto it:s){
//             b.push_back(it);
//         }
//         return b;




// optimal solution
vector<int> Union(int arr1[],int arr2[],int n , int m){
    int i =0;
    int j =0;
    vector<int> v;
    while(i<n && j<m){
        if(arr1[i]<=arr2[j]){
           if(v.size()==0||v.back()!=arr1[i])
           v.push_back(arr1[i]);
           i++; 
        }
        else{
             if(v.size()==0||v.back()!=arr2[j])
             v.push_back(arr2[j]);
             j++;
        }
    }
    while(i<n){
           if(v.size()==0||v.back()!=arr1[i])
           v.push_back(arr1[i]);
           i++; 
        }  
  
  while(j<m){
      if(v.size()==0||v.back()!=arr2[j])
             v.push_back(arr2[j]);
             j++;
  }
  return v;
}

int main(){
    int arr1[] = {1,2,3,3};
    int arr2[] = {2,3,4};
    int n =4;
    int m = 3;
   vector<int> v =  Union(arr1,arr2,n,m);
    for(auto &st:v){
   cout<<st<<" ";
} 
    }