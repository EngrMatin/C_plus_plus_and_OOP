#include<bits/stdc++.h>
using namespace std;

class Parent
{
public:
   void Fun()
   {
       cout<<"Parent"<<endl;
   }
};

class Child: public Parent
{
public:
   void Fun()
   {
       cout<<"Child"<<endl;
   }
};

int main()
{
    Child obj;
    obj.Fun();

}
