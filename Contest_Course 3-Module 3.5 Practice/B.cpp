#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[100001];
    cin>>s;

    int len= strlen(s);
    for(int i=0; i<len; i=i+2)
    {
        cout<<s[i];
    }
    return 0;
}
