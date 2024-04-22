#include<iostream>
using namespace std;
int search(int arr[],int s,int e,int target){
    
    int mid = (s+e)/2;
    if(s>e) 
    return 0;
    if(arr[mid]==target)
     return 1;
    else if(arr[mid]<target) 
      return  search(arr,mid+1,e,target);
    else 
      return search(arr,s,e-1,target);
}
int main(){ 
    int arr[] = {2,3,4,5,6,7};
    int start = 0;
    int end = 5;
    int target = 8;
   int ans = search(arr,start,end,target);
   cout<<ans<<endl;
}