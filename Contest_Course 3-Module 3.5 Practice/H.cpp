#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[11], b[11], c[11];
    cin>>a>>b>>c;

    int len1= strlen(a);
    int len2= strlen(b);
    int len3= strlen(c);

    if(a[len1-1]==b[0] && b[len2-1]==c[0])
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
