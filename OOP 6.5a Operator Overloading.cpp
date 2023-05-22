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
       Example ans(0);
       ans.x= x+obj.x;
       return ans;
   }
};

int main()
{
    Example ex1(10), ex2(20), ex3(50);
    Example ans=ex1+ex2;
    Example result=ans+ex3;
    cout<<ans.x<<endl;
    cout<<result.x<<endl;
}
