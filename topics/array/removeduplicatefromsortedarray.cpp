#include<bits/stdc++.h>
using namespace std;
 void removedup(int nums[],int n) {
        int j =0;
        // int n = nums.size();
        int temp[n];
        for(int i =0;i<n-1;i++){
            if(nums[i]!=nums[i+1]){
                temp[j] =nums[i];
                j++;
            }
        }
        temp[j] = nums[n-1];
        j++;
        // for(int i =0;i<j;i++){
        //       nums[i] = temp[i];
        // }
        // return j;
         for(int i =0;i<j;i++){
        cout<<temp[i]<<" ";
     }
    }
int main(){
   int nums[]= {1,1,2,3,3,3,4,5,9,10,10};
    int n = sizeof(nums)/sizeof(nums[0]);
     removedup(nums ,n);
    // cout<<s;
    // for(int i =0;i<s;i++){
    //     cout<<nums[i]<<" ";
    // }
    return 0;
}


// by uisng set
// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;
void sort(int arr[],int n){
    set<int>st;
    for(int i =0;i<n;i++){
        st.insert(arr[i]);
    }
      for(auto i : st){
      cout<<i <<" ";
  }
}
int main() {
    // Write C++ code here
    int arr[] = {1,1,2,2,2,3,3};
    int n = 7;
    sort(arr,n);

    return 0;
}



