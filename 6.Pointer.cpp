#include<bits/stdc++.h>
using namespace std;

void pointer(int *x);
void doublePointer(int **x);

int main()
{
    int a=10;
    int *ptr= &a;
    int **q= &ptr;

    pointer(ptr);
    cout<<a<<endl;

    doublePointer(q);
    cout<<a<<endl;

    return 0;
}

void pointer(int *x)
{
    *x=2500;
}

void doublePointer(int **x)
{
    **x=5000;
}
