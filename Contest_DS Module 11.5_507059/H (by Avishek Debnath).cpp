#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    int n;
    for(int j=0; j<t; j++)
    {
        cin>>n;

        int position[n];
        for(int i=0; i<n; i++)
        {
            cin>>position[i];
        }

        int swap, totalSwap=0, flag=1;
        for(int i=0; i<n; i++)
        {
            swap=0;
            if(position[i]> i+1)
            {
                swap=position[i]- (i+1);
            }

            if(swap>2)
            {
                flag=-1;
                break;
            }
            totalSwap += swap;

        }

        if(flag== -1)
        {
            cout<<"Not Allowed"<<endl;
        }
        else
        {
            cout<<totalSwap<<endl;
        }
    }
    return 0;
}
