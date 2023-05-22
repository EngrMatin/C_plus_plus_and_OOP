#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, caseNo=1;
    cin>>t;

    while(t--)
    {
        cout<<"Case "<<caseNo++<<":"<<endl;

        int n, q;
        cin>>n>>q;

        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        while(q--)
        {
            int s, i, v;
            cin>>s;

            if(s==1)
            {
                cin>>i;
                cout<<a[i]<<endl;
                a[i]=0;
            }
            else if(s==2)
            {
                cin>>i>>v;
                a[i] += v;
            }
            else if(s==3)
            {
                int i, j;
                long long sum=0;
                cin>>i>>j;

                for(int k=i; k<=j; k++)
                {
                    sum += a[k];
                }
                cout<<sum<<endl;
            }
        }
    }
    return 0;
}
