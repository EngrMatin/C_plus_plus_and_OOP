#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st1="abcd";
    string st2="xyz";
    st2="asdf";
    st1=st2;
    cout<<st1<<endl;
    st1=st1+st2;
    cout<<st1<<endl;

    if(st1==st2)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }

}
