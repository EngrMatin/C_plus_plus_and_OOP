#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;

    int len[n];
    for(int i=0; i<n; i++)
    {
        cin>>len[i];
    }

    sort(len, len+n);

    int sum=0;
    for(int i=n-k; i<n; i++)
    {
        sum=sum+len[i];
    }
    cout<<sum<<endl;
    return 0;
}
