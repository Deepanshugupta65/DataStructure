#include<bits/stdc++.h>
using namespace std;

void reverse(string a[],int size){
   int start =0;
   int end = size-1;
   while(start<end){
    swap(a[start++],a[end--]);
   }
  for(int i =0;i<size;i++){
    cout<<a[i]<<" ";
  }

}

int main(){
    string a[] = {"a","b","c","d","e","f"};
    int size = 6;
    reverse(a,size);
}