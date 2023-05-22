#include<bits/stdc++.h>

using namespace std;

int main()
{
    double n= 2.698;
    int x= (int) n;
    cout<<"X= "<<x<<endl;

    n= 8.975;
    x= int (n);
    cout<<"X= "<<x<<endl;

    int a[5];
    for(int i=0; i<5; i++)
    {
        cin>>a[i];
        //scanf("%d", &a[i]);
    }

    for(int i=0; i<5; i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
