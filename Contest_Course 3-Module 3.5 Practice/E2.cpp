#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int x;
    for(int i=0; i<=sqrt(n); i++)
    {
        if(pow(2,i)<=n)
        {
            x=i;
        }
    }
    cout<<pow(2,x)<<endl;

    return 0;
}
