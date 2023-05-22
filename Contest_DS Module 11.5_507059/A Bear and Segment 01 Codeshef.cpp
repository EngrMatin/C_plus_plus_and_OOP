#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    string str;
    for(int j=0; j<t; j++)
    {
        cin>>str;

        int flag=0;
        for(int i=0; i<str.size(); i++)
        {
            if(str[i] == '1' && (flag==0 || flag==1))
            {
                flag= 1;
            }
            else if(str[i] == '0' && flag==1)
            {
                flag= 2;
            }
            else if(str[i] == '1' && flag==2)
            {
                flag= 3;
                break;
            }
        }

        if(flag==1 || flag==2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
