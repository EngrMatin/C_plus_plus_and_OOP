#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    int len = s.length();
    int count = 0;

    char ans = s[0];
    for(int i=0; i<len; i++)
    {
        int newCount = 1;
        for(int j=i+1; j<len; j++)
        {
            if(s[i] != s[j])
            {
                break;
            }

            newCount++;
        }

        if (newCount > count)
        {
            count = newCount;
            ans = s[i];
        }
    }

    cout<<ans<<" : "<<count<<endl;

    return 0;
}
