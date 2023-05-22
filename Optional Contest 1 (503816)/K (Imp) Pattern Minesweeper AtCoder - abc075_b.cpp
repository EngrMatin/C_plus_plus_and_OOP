#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long h, w;
    cin>>h>>w;

    char arr[h+1][w+1];
    for(long long i=0; i<h; ++i)
    {
        for(long long j=0; j<w; j++)
        {
            cin>>arr[i][j];
        }
    }

    for(long long i=0; i<h; ++i)
    {
        for(long long j=0; j<w; j++)
        {
            if(arr[i][j] == '.')
            {
                long long n=0;
                if(arr[i][j+1] == '#')
                {
                    n++;
                }
                if(arr[i][j-1] == '#')
                {
                    n++;
                }
                if(arr[i-1][j-1] == '#')
                {
                    n++;
                }
                if(arr[i-1][j] == '#')
                {
                    n++;
                }
                if(arr[i-1][j+1] == '#')
                {
                    n++;
                }
                if(arr[i+1][j-1] == '#')
                {
                    n++;
                }
                if(arr[i+1][j] == '#')
                {
                    n++;
                }
                if(arr[i+1][j+1] == '#')
                {
                    n++;
                }
                cout<<n;
            }
            else
            {
                cout<<"#";
            }
        }
        cout<<endl;
    }
}
