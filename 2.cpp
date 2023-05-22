#include<iostream>     // #include<bits/stdc++.h>  to include all header files in C and C++
#include<iomanip>
using namespace std;

int main()
{
    float a= 10.12345678;
    double b= 50.1969788;
    cout<<"A= "<<a<<endl;          //A= 10.1235
    cout<<"B= "<<b<<endl;          //B= 50.1235

    printf("A= %.2f\n", a);       //A= 10.12
    printf("B= %.2lf\n", b);      //B= 10.12

    cout<<fixed<<setprecision(2)<<"B= "<<b<<endl;   //B= 10.12

    int n, p;
    cin>>n>>p;
    cout<<"N= "<<n<<" "<<"P= "<<p<<endl;

    char s[50];
    cin>>s;        // same as scanf()
    cout<<s<<endl;

    char s2[50];
    gets(s2);
    cout<<s2<<endl;

    char s3[50];
    cin.getline(s3, 50);
    cout<<s3<<endl;

    string str;
    getline(cin, str);
    cout<<str<<endl;

    return 0;
}
