#include<iostream>
#include<conio.h>
using namespace std;
class demo{
    public:

   void get( ){
    cout<<"this is the get function\n";
   }
   void display(){
    cout<<"this is the display function\n";
   }
 };
int  main(){
   class demo obj;
  obj.get();
  obj.display();
  return 0;
}