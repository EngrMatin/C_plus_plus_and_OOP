#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str="abcd";
    cout<<str<<endl;
    cout<<"str.capacity() : "<<str.capacity()<<endl;
    cout<<"str.max_size() : "<<str.max_size()<<endl;

    str="xyzabcdxyz";
    cout<<str<<endl;
    cout<<"str.capacity() : "<<str.capacity()<<endl;
    cout<<"str.max_size() : "<<str.max_size()<<endl;

    cin>>str;
    cout<<str<<endl;
    cout<<"str.capacity() : "<<str.capacity()<<endl;
    cout<<"str.max_size() : "<<str.max_size()<<endl;

    string st(10, 'z');
    cout<<st<<endl;
    cout<<"str.capacity() : "<<str.capacity()<<endl;
    cout<<"str.max_size() : "<<str.max_size()<<endl;
}
