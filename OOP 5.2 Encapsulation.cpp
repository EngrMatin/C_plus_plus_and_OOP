#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[50];
    int roll;
    void sayHi()
    {
        cout<<"Hi "<<name<<" "<<"Roll: "<<roll<<endl;
    }
};

int main()
{
    Student st;
    strcpy(st.name, "Abrar Sakib");
    st.roll= 56;

    st.sayHi();
    cout<<st.name<<" "<<st.roll<<endl;
}
