#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="Sakib Rahman Saki";
    stringstream stream(s);

    string w;
    while(stream>>w)
    {
        cout<<w<<endl;
    }

    string st="Rakib Rahman Roki";
    stringstream stream2;
    stream2<<st;

    string w2;
    while(stream2>>w2)
    {
        cout<<w2<<endl;
    }


}
