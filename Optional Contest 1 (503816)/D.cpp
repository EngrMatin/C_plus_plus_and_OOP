#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[200001];
    cin>>s;

    int len= strlen(s);
    int a, b;
    for(int i=0; i<len; i++)
    {
        if(s[i]=='A')
        {
            a=i;
            break;
        }
    }

    for(int i=len-1; i>0; i--)
    {
        if(s[i]=='Z')
        {
            b=i;
            break;
        }
    }

    cout<<b-a+1<<endl;
}
