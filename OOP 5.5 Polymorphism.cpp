#include<bits/stdc++.h>
using namespace std;

class Example
{
public:
    int add(int x, int y)
    {
        cout<<"First one"<<endl;
        return x+y;
    }

    double add(double x, double y)
    {
        cout<<"Second one"<<endl;
        return x+y;
    }

    void add(char a)
    {
        cout<<"It is "<<a<<endl;
    }

    void add(string s)
    {
        cout<<"Hi "<<s<<endl;
    }
};

int main()
{
    Example ex;

    cout<<ex.add(1.99,2.5)<<endl;
    cout<<ex.add(10,25)<<endl;
    ex.add('X');
    ex.add("Matin");
}
