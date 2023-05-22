#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a, b, p=0;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
        p = p+(b-a+1);
    }
    cout<<p<<endl;
}
