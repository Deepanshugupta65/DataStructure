#include<iostream>
using namespace std;
int partition(int *arr,int s , int e){
    int pivot = arr[s];
    int count=0;
    for(int i =s+1;i<=e;i++){
       if(arr[i]<=pivot)
       count++;
    }
    // place pivot at right place
    int pivotindex = s+count;
    swap(arr[s],arr[pivotindex]);

    // pivot index k left me use chote aur right me use bde 

    int i = s, j = e;
    while(i<pivotindex&&j>pivotindex){
        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotindex&&j>pivotindex){
        swap(arr[i++],arr[j--]);

        }
    }
    return pivotindex;
}



void quicksort(int *arr,int s, int e){
    {
        // base case
        if(s>=e){
            return;
        }
        // partition
        int p = partition(arr,s,e);
        // left k liye
        quicksort(arr,s,p-1);
        // right k liye
        quicksort(arr,p+1,e);
    }
}

int main(){
    int arr[10] ={3,4,5,6,8,9,4,5,1,2};
    int n =10;
    quicksort(arr,0,n-1);
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}