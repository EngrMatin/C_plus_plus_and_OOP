#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[100001];
    cin>>s;

    int len= strlen(s);
    char a[27]= "abcdefghijklmnopqrstuvwxyz";
    int freq[27]={0};
    for(int i=0; i<len; i++)
    {
        for(int j=0; j<26; j++)
        {
            if(s[i]== a[j])
            {
                freq[j]++;
            }
        }
    }
    int flag=0;
    for(int i=0; i<26; i++)
    {
        if(freq[i]==0)
        {
            cout<<a[i]<<endl;
            return 0;
        }
        else if(freq[i]!=0)
        {
            flag=1;
        }
    }
    if(flag)
    {
        cout<<"None"<<endl;
    }
    return 0;
}
