#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    int n, q;
    for(int i=0; i<t; i++)
    {
        cin>>n>>q;

        int length[n];
        for(int j=0; j<n; j++)
        {
            cin>>length[j];
        }

        int k[q];
        for(int x=0; x<q; x++)
        {
            cin>>k[x];
        }

        for(int x=0; x<q; x++)
        {
            int count=0;
            for(int j=0; j<n; j++)
            {
                for(int z=j+1; z<n; z++)
                {
                    if(length[j]<k[x] && length[j]>length[z])
                    {
                        length[j]+=1;
                    }
                }

                if(length[j]>=k[x])
                {
                    count++;
                }
            }
            cout<<count<<endl;
        }
    }
    return 0;
}
