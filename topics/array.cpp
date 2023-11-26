// reverse an array using functiion

/*
#include<iostream>
using namespace std;

void reverarray(int arr[] , int start ,int end){
     while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end]= temp;
        start++;
        end--;
     }
}
void printarray(int arr[],int size){
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    printarray(arr , n);
    reverarray(arr , 0 ,n-1);
    printarray(arr , n);
    return 0;
} 
*/

// using stl program reverse an array  

/*
// #include<algorithm>

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void printarray(int arr[],int n){
    reverse(arr,arr+n);

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    return;
}
int main(){
    int arr[] = {5,4,89,45,21,47};
    int n = sizeof(arr)/sizeof(arr[0]);
    printarray(arr , n);
    return 0;
} */
// minmax function using

/*
#include<bits/stdc++.h>
#include<iostream>
void minmax(int arr[],int n){
    int max = arr[0];
    int min =arr[0];
    for(int i=1;i<n;i++){
        if(max<arr[i])
        max =arr[i];
        if(min>arr[i])
        min =arr[i];
    }
    std::cout<<"maximum :" <<max<<" ";
    std::cout<<"minimum :"<<min;
}

int main(){
    int arr[]={12,25,48,98,10,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    minmax(arr , n);
}

*/

// minmax using max and min function 
/*
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v ={10,20,54,1,45,14,78};
    int min=0;
    int max=0;
    min = *min_element(v.begin(),v.end());
    max = *max_element(v.begin(),v.end());
    std::cout<<min<<" ";
    std::cout<<max<<" ";
    return 0;
}
*/
//  sort of 012 or DNF  sort program 

/*
#include<iostream>
using namespace std;
void swap(int arr[],int i,int j){
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
void sort123(int arr[],int n){
    int low = 0,high = n-1, mid = 0;
    while (mid<=high)
    {
        if(arr[mid]==0){
            swap(arr , low , mid);
            low++;high++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr,mid,high);
            high--;
        }
    }
    
}
int main(){
    int arr[] ={1,0,2,1,1,2,0,2,1,1};
    sort123(arr ,9);
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
*/
// Move all negative number at the one side
/*
#include<bits/stdc++.h>
using namespace std;
void movenum(int arr[],int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0)
        {
            if(i!=j)
            swap(arr[i],arr[j]);
            j++;
        }
    }
}

void printarr(int arr[],int n){
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}

int main(){
    int arr[] ={-5,-4,7,-7,1,2,-8,-78,45};
    int n = sizeof(arr)/sizeof(arr[0]);
    movenum(arr ,n);
    printarr(arr ,n);
    return 0;
}

*/
//  cyclic rotation in array 
/*
#include<bits/stdc++.h>
using namespace std;

void rotatearray(int arr[] ,int n){
    int i=0,j=n-1;
    while(i!=j){
        swap(arr[i],arr[j]);
        i++;
    }
}
int main(){
    int arr[] ={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    rotatearray(arr ,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
*/
// 2nd approach for cyclic rotatioin not using inbuilt function;
/*
#include<iostream>
using namespace std;
void rotatearray(int arr[] ,int n){
    int i,x=arr[n-1];
    for(i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
        arr[0]=x;

}
int main(){
    int arr[] ={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    rotatearray(arr ,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] ={3,4,5,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int a = INT_MIN;
    int c=0;
    for(int i = 0;i<n;i++){
        if(arr[i]>a)
        c++;
        a=arr[i];
    }
    cout<<c<<endl;
    return 0;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = INT_MIN,n,m,c=0;
    cin>>n;
    while(n--){
        cin>>m;
        if(m>a){
        a = m;
        c++;
        }
     }
     cout<<c<<endl;
    return 0;
}
*/