#include<bits/stdc++.h>
using namespace std;

class Example
{
public:
   int x;
   Example(int a)
   {
       x=a;
   }

   Example operator +(Example obj)
   {
       cout<<x<<" "<<obj.x<<endl;
       cout<<x+obj.x<<endl;
   }
};

int main()
{
    Example ex1(10), ex2(20);
    ex1+ex2;
}
