#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=10, b=15, c=20;

    int mx= max(a, b);
    int mn= min(a, b);
    cout<<"Max= "<<mx<<" Min= "<<mn<<endl;

    mx= max(max(a, b), c);
    mn= min(min(a, b), c);
    cout<<"Max= "<<mx<<" Min= "<<mn<<endl;

    mx= max({a, b, c});
    mn= min({a, b, c});
    cout<<"Max= "<<mx<<" Min= "<<mn<<endl;

    int arr[5]= {1,2,3,4,5};
    mx= arr[0];
    for(int i=1; i<5; i++)
    {
        if(arr[i]>mx)
        {
            mx= arr[i];
        }
    }
    cout<<"Max= "<<mx<<endl;

    mn= arr[0];
    for(int i=1; i<5; i++)
    {
        if(arr[i]<mn)
        {
            mn= arr[i];
        }
    }
    cout<<"Min= "<<mn<<endl;

    return 0;
}
