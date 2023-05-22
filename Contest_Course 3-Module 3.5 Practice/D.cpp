#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[101];
    cin>>s;

    int len= strlen(s);
    cout<<s[0]<<len-2<<s[len-1]<<endl;

    return 0;
}
