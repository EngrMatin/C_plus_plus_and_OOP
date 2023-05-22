#include<bits/stdc++.h>
using namespace std;

class Example
{
private:
    int x;
    int pass;
public:
    Example(int p)
    {
        pass=p;
    }

    void setter(int a, int p)
    {
        if(pass==p)
        {
            x=a;
        }
        else
        {
            cout<<"Wrong Password!"<<endl;
        }
    }

    int getter(int p)
    {
        if(pass==p)
        {
            return x;
        }
        else
        {
            cout<<"Wrong Password!"<<endl;
            return -1;
        }
    }
};

int main()
{
    Example a(12345);
    a.setter(1500, 12345);
    cout<<a.getter(12345)<<endl;
}
