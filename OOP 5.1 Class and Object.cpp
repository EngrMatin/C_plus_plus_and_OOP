#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[50];
    int roll;
};

int main()
{
    Student st;
    strcpy(st.name, "Abrar Sakib");
    st.roll= 56;

    cout<<st.name<<" "<<st.roll<<endl;
}
