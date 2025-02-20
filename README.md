# DSA
ARRAY
// two pointer approch  for reversing the array
#include<bits/stdc++.h>
using namespace std;
void reversearray(int arr[], int sz){
    int start =0, end=sz-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;

    }
}
int main(){
    int arr[]={4,2,3,5,6,7};
    int sz=sizeof(arr)/sizeof(int);
    reversearray(arr,sz);
    for(int i=0;i<sz;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
// big(0) of time complexity


