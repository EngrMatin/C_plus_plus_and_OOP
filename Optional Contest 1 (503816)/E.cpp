#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    char s[101];
    cin>>s;

    int x=0, j=0, a[100];
    a[j]=x;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='I')
        {
            x=x+1;
        }
        else if(s[i]=='D')
        {
            x=x-1;
        }
        a[++j]=x;
    }

    int max= a[0];
    for(int j=0; j<=n; j++)
    {
        if(a[j]>max)
        {
            max= a[j];
        }
    }
    cout<<max<<endl;
}
