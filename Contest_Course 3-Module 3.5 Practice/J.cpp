#include<bits/stdc++.h>
using namespace std;

int main()
{
    char odd[51], even[51];
    cin>>odd>>even;

    int len1= strlen(odd);
    int len2= strlen(even);

    if((len1-len2)==0)
    {
        for(int i=0; i<len1; i++)
        {
            cout<<odd[i]<<even[i];
        }
    }
    else if((len1-len2)==1)
    {
        for(int i=0; i<len1-1; i++)
        {
            cout<<odd[i]<<even[i];
        }
        cout<<odd[len1-1];
    }

    return 0;
}
