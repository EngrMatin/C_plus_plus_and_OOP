#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, cs=1;
    cin>>t;

    while(t--)
    {
        cout<<"Case "<<cs++<<":"<<endl;

        int n, q;
        cin>>n>>q;

        int a[n];
        for(int k=0; k<n; k++)
        {
            cin>>a[k];
        }

        int preSum[n];
        preSum[0]=a[0];
        for(int k=1; k<n; k++)
        {
            preSum[k]= a[k]+preSum[k-1];
        }

        while(q--)
        {
            int s, i, v;
            cin>>s;

            if(s==1)
            {
                cin>>i;
                if(i==0)
                {
                    cout<<preSum[i]<<endl;
                }
                else if(i>0)
                {
                    cout<<preSum[i]-preSum[i-1]<<endl;
                }

                for(int k=i; k<n; k++)
                {
                    preSum[k] -= (preSum[i]-preSum[i-1]);
                }
            }
            else if(s==2)
            {
                cin>>i>>v;
                //a[i] += v;

                for(int k=i; k<n; k++)
                {
                    preSum[k] += v;
                }
            }
            else if(s==3)
            {
                int i, j;
                long long sum=0;
                cin>>i>>j;

                if(i==0)
                {
                    cout<<preSum[j]<<endl;
                }
                else if(i>0)
                {
                    cout<<preSum[j]-preSum[i-1]<<endl;
                }
            }
        }
    }
    return 0;
}
