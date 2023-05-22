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

   int operator +(Example obj)
   {
       return x+obj.x;
   }
};

int main()
{
    Example ex1(10), ex2(20), ex3(50);
    int ans=ex1+ex2;
    cout<<ans<<endl;

    Example result(ans);
    cout<<result+ex3<<endl;
}
