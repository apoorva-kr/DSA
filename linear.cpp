#include<bits/stdc++.h>
using namespace std;
int linearArray( int arr[],int size, int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    
    }
    return -1;
}
int main(){
    int arr[]={4,6,8,7,9};
    int target =9;
    int size = sizeof(arr)/sizeof(int);
    cout<<linearArray(arr,size,target)<<endl;

    return 0;
}
// time complexity  linear search O(n) 
//  binary search O(logn)

