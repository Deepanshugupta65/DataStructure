#include<iostream>
using namespace std;

class heap{
    public:
    int arr[100];
    int size =0;
    
    heap(){
        arr[0] =-1;
        size =0;
    }
    // insertion in heap
    void insert(int val){
        size = size + 1;
        int index = size;
        arr[index] = val;

        while(index>1){
            int parent = index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index = parent;
            }
            else{
                return ;
            }
        }
    }
    // deletion in heap
    void deletefromheap(){
        if(size==0){
            cout<<"nothing to delete"<<endl;
            return ;
        }
        // step 1: put last element into first index
        arr[1] = arr[size];
        // step 2 remove
        size--;
        // step 3 take root node to its correct postion
        int i =1;
        while(i<size){
            int leftindex = 2*i;
            int rightindex = 2*i + 1;

            if(leftindex<size && arr[i]<arr[leftindex])
            {
                swap(arr[i],arr[leftindex]);
                i = leftindex;
            }
            else if(rightindex < size && arr[i]<arr[rightindex]){
                swap(arr[i],arr[rightindex]);
                i = rightindex;
            }
            else{
                return ;
            }
        }
    }
    void print(){
        for(int i =1;i<=size;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
};
int main(){
    heap h;
    h.insert(60);
    h.insert(50);
    h.insert(40);
    h.insert(30);
    h.insert(20);
    h.insert(55);
    h.print();
    h.deletefromheap();
    h.print();
    return 0;
}