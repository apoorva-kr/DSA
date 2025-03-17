#include<iostream>
#include<conio.h>



  class student{
      int age , rno;
      char sname[20];
   void get(){
   cout<<"enter name"<<endl;
   fflush(stdin);
   cout<<"enter age"<<endl;
   cin>>age;
   cout<<"enter the roll_no"<<endl;
   cin>>rno;
   }
   void display(){
   cout<<"rno"<<rno<<endl;
   cout<<"name"<<sname<<endl;
   cout<<"age"<<age<<endl;
   }
  };
  int main(){
      class student s1,s2;
      cout<<"enter s1 details";
      s1.get();
       cout<<"enter s2 details";
      s2.get();
       cout<<"print s1 details";
      s1.display();
       cout<<"print s2 details";
      s2.display();
      return0;

  }
