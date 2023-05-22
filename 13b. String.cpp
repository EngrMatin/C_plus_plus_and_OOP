#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st="abcdefghijk";
    cout<<st<<endl;
    cout<<st[3]<<endl;
    cout<<st.at(3)<<endl;
    cout<<st.front()<<endl;
    cout<<st.back()<<endl;

    cout<<st.length()<<endl;
    cout<<st.size()<<endl;

    st.resize(5);
    cout<<st<<endl;
    cout<<st.length()<<endl;
    cout<<st.size()<<endl;

    st.clear();
    cout<<st<<endl;
    cout<<st.length()<<endl;
    cout<<st.size()<<endl;

    if(st.empty())
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}
