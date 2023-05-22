#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[101];
    cin>>s;

    char c[27]={0};
    char a[27]="abcdefghijklmnopqrstuvwxyz";

    int len= strlen(s);

    if(len%2!=0)
    {
        cout<<"No"<<endl;
        return 0;
    }
    else if(len%2==0)
    {
        for(int i=0; i<len; i++)
        {

            for(int j=0; j<26; j++)
            {
                if(s[i]==a[j])
                {
                    c[j]++;
                }
            }
        }
    }

    int p;
    for(int i=0; i<26; i++)
    {

        if(c[i]%2!=0)
        {
            p=-1;
            break;
        }
        else
        {
            p=1;
        }
    }

    if(p==1)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}
