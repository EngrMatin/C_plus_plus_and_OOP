#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v(3, -1);
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl<<endl;

    v.push_back(5);

    vector<int> :: iterator it;
    for(it=v.begin(); it!=v.end(); it++)
    {
        cout<< *it <<" ";
    }
    cout<<endl<<endl;

    for(auto it2=v.begin(); it2!=v.end(); it2++)
    {
        cout<< *it2 <<" ";
    }
    cout<<endl<<endl;

    for(auto element: v)         //Using 'auto' Register in range based traversal
    {
        cout<<element<<" ";
    }
    cout<<endl<<endl;

    return 0;
}
