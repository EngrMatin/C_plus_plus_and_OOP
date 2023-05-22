#include<bits/stdc++.h>

using namespace std;

namespace one
{
    int x= 20;
    void Fun()
    {
        cout<<"I am namespace one"<<endl;
    }
}

namespace two
{
    int y= 50;
    void Fun()
    {
        cout<<"I am namespace two"<<endl;
    }
}
using namespace one;
int main()
{
    Fun();
    two::Fun();

    cout<<"X= "<<x<<endl;
    cout<<"Y= "<<two::y<<endl;

    return 0;
}
