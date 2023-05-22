#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    int n, k;
    for(int i=0; i<t; i++)
    {
        cin>>n>>k;

        int height[n];
        for(int j=0; j<n; j++)
        {
            cin>>height[j];
        }

        int count=0;
        for(int j=0; j<n; j++)
        {
            if(height[j]>k)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
