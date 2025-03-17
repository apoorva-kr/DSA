#include<iostream>
using namespace std;

int main(){
 int sum=0,num, temp;
 cout<<"enter the num"<<endl;
 cin>>num;
 temp =num;
 while(temp>0){
    sum+=temp%10;
    temp=temp/10;
    
 }
 cout<<"the sum of the number " <<sum<<endl;

return 0;
}