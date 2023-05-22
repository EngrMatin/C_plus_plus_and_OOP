#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st="abcdefghijk";
    string:: iterator it;                  // iterator is a pointer
    for(it=st.begin(); it!=st.end(); it++)
    {
        cout<<*it<<endl;
    }

    string:: reverse_iterator it2;
    for(it2=st.rbegin(); it2!=st.rend(); it2++)
    {
        cout<<*it2<<endl;
    }

    for(auto it3=st.rbegin(); it3!=st.rend(); it3++)
    {
        cout<<*it3<<endl;
    }

}
