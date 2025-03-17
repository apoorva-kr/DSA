#include<iostream>
using namespace std;

class Demo{
    int i, a[];
    public:
    void get( int n){
        for(i=0;i<n;i++)
            cin>>a[i];
               
    }
    void display(int n){
        for( i=0;i<n;i++)
            cout<<a[i]<<"";
        }
    
};
int main(){
 class Demo obj;
 int n;
 cout<<"enter num of elements\n";
 cin>>n;
 cout<<"enter array elements\n";
 obj.get(n);
 cout<<"array elements are\n";
 obj.display(n);

return 0;
}