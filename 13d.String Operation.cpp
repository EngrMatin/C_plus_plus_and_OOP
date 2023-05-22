#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st="Sakiba";
    cout<<st.find('a')<<endl;
    cout<<st.find_first_of('a')<<endl;
    cout<<st.rfind('a')<<endl;
    cout<<st.find_last_of('a')<<endl;

    cout<<st.find('x')<<endl;

    cout<<st.find_first_not_of('a')<<endl;
    cout<<st.find_last_not_of('a')<<endl;

    cout<<st.substr(2,5)<<endl;

}
