#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int value[n], valueSum=0, freq[n];
    for(int i=0; i<n; i++)
    {
        cin>>value[i];
        valueSum += value[i];
    }

    int pair= n/2;
    int valuePerPair= valueSum/pair;

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(value[i]+value[j]==valuePerPair)
            {
                cout<<i+1<<" "<<j+1<<endl;
            }
        }
    }
    return 0;
}
