#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b, x;
    cin>>a>>b>>x;

    long long int count=0;
    for(int i=a; i<=b; i++)
    {
        if(i%x==0)
        {
            count++;
        }
    }
    cout<<count<<endl;
}
