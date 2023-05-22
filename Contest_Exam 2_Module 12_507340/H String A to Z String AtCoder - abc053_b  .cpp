#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;

    int a, b, len;
    len= str.size();

    for(int i=0; i<len; i++)
    {
        if(str[i]=='A')
        {
            a=i;
            break;
        }
    }

    for(int i=0; i<len; i++)
    {
        if(str[len-i]== 'Z')
        {
            b= len-i+1;
            break;
        }
    }

    cout<<b-a<<endl;

    return 0;
}
