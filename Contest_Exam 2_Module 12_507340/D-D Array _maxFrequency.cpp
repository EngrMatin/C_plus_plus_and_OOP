#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int a[n], freq[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        int maxCount=0;
        for(int i=0; i<n; i++)
        {
            int count = 0;
            for(int j=0; j<n; j++)
            {
                if(a[i]==a[j])
                {
                    count++;
                }
            }

            if(count>maxCount)
            {
                maxCount = count;
            }
        }
        cout<<n-maxCount<<endl;
    }
    return 0;
}
