#include<iostream>
using namespace std;

class Demo{
    private:
    int i;
    public:
     void forloop(){
        for( i=0;i<=10;i++)
            cout<<i<< " " ;
        
     }
     void whileloop(){
   
        while(i<=10);
        cout<<i<<" ";
        i++;
        
     }
     void dowhile(){
        i=1;
        do {
            cout<<i<<" ";
            i++;

        }while(i<=10);
      
     }
    };

int main(){
 class Demo obj;
 cout<<" prnting num from 1 to 10 using for loop\n";
 obj.forloop();
 cout<<" prnting num from 1 to 10 using while loop\n";
 obj.whileloop();
 cout<<" prnting num from 1 to 10 using do while loop\n";
 obj.dowhile();

return 0;
}