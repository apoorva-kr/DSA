#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int i, n, m;
    cout<<"Enter 2 Numbers\n";
    cin>>n;
    cin>>m;

    if(n > m) swap(n, m); // swap n and m if n is greater

    cout<<"Numbers from "<<n<<" to "<<m<<" is : \n";
    for(i=n; i<=m; i++) {
        cout<<i<<" ";
    }

   return 0;
}