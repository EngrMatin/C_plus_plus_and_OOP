#include<bits/stdc++.h>
using namespace std;

class Parent
{
private:
    int balance;
protected:
    int password;
public:
    Parent(int tk, int ps)
    {
        balance=tk;
        password=ps;
    }
    friend class Bondhu;
};

class Bondhu
{
public:
    void tellSecret(Parent *ptr)
    {
        cout<<"Balance: "<<ptr->balance<<endl;
        cout<<"Password: "<<ptr->password<<endl;
    }
};

int main()
{
    Parent pox(9500000, 1234);
    Bondhu fox;
    fox.tellSecret(&pox);
}
