#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st1="Rakib";
    string st2;
    st2.assign("Sakib");
    cout<<st2<<endl;

    st1=st1+st2;
    cout<<st1<<endl;

    st1.append(st2);
    cout<<st1<<endl;

    st2.push_back('X');
    cout<<st2<<endl;

    st2.pop_back();
    cout<<st2<<endl;

    st2.insert(2, "XXX");
    cout<<st2<<endl;

    st2.erase(2, 3);
    cout<<st2<<endl;

    swap(st1, st2);
    cout<<st1<<" "<<st2<<endl;

}
