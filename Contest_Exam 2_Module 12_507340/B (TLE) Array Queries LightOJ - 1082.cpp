//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int t, cs=1;
    cin>>t;

    while(t--)
    {
        cin.ignore();
        int n, q;
        cin>>n>>q;

        int a[n];
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }

        cout<<"Case "<<cs++<<":"<<endl;
        while(q--)
        {
            int x, y;
            cin>>x>>y;
            int mn= a[x];
            for(int k=x; k<=y; k++)
            {
                if(a[k]<mn)
                {
                    mn=a[k];
                }
            }
            cout<<mn<<endl;
        }
    }

    return 0;
}
