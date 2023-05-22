#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a, b, scoreA=0, scoreB=0;
    int player, lead=0;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b;

        scoreA += a;
        scoreB += b;

        if(scoreA-scoreB>lead)
        {
            lead= scoreA-scoreB;
            player= 1;
        }

        else if(scoreB-scoreA>lead)
        {
            lead= scoreB-scoreA;
            player= 2;
        }
    }

    cout<<player<<" "<<lead<<endl;
    return 0;
}
