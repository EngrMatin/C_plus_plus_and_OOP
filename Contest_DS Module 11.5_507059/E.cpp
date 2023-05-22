#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    int n;
    for(int i=0; i<t; i++)
    {
        cin>>n;

        int a[n];
        for(int j=0; j<n; j++)
        {
            cin>>a[j];
        }

        int b[n];
        for(int j=0; j<n; j++)
        {
            cin>>b[j];
        }

        int points[n];
        for(int j=0; j<n; j++)
        {
            points[j]= a[j]*20 - b[j]*10;
            if(points[j]<0)
            {
                points[j]= 0;
            }
        }

        int mx= points[0];
        for(int j=0; j<n; j++)
        {
            if(points[j]>mx)
            {
                mx=points[j];
            }
        }
        cout<<mx<<endl;
    }

    return 0;
}
