#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long n=0;
        long long swap=0, totalSwap=0, flag=0;
        cin>>n;

        long long position[n];
        for(int i=0; i<n; i++)
        {
            cin>>position[i];
            if(position[i]- i-1>2)
            {
                flag=1;
            }

            for(int j=0; j<i; j++)
            {
                if(position[j]>position[i])
                {
                    swap++;
                }
            }
        }

        if(flag==0)
        {
            cout<<totalSwap<<endl;

        }
        else
        {
            cout<<"Not Allowed"<<endl;
        }
    }
    return 0;
}
