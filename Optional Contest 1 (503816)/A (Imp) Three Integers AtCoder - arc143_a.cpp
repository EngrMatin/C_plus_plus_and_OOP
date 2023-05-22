#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, c;
    cin>>a>>b>>c;

    long long max1, max2, min1;
    max1 = max(a, max(b, c));

    if(max1 == a)
    {
        max2= max(b, c);
    }
    else if(max1 == b)
    {
        max2= max(a, c);
    }
    else if(max1 == c)
    {
        max2= max(a, b);
    }

    min1= min(a, min(b, c));

    if(max1-max2>min1)
    {
        cout<<-1;
    }
    else
    {
        cout<<max1;
    }
}
