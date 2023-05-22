#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    char section;
    int roll;
protected:
    int englishMarks;
private:
    string password;
public:
    void setPassword(string pw)
    {
        password= pw;
    }

    void setMarks(int marks)
    {
        englishMarks= marks;
    }

    int getMarks()
    {
        return englishMarks;
    }

    void updateMarks(string pass, int marks)
    {
        if(pass == password)
        {
            englishMarks= marks;
        }
        else
        {
            cout<<"Password didn't match"<<endl;
        }
    }

};

int main()
{
    int n;
    cin>>n;

    Student st[n];
    int roll, marks;
    string password;
    for(int i=0; i<n; i++)
    {
        cin>>st[i].name>>st[i].section>>st[i].roll;
        cin>>marks>>password;
        st[i].setMarks(marks);
        st[i].setPassword(password);
    }

    cin>>roll>>marks>>password;
    bool found=false;
    for(int i=0; i<n; i++)
    {
        if(st[i].roll == roll)
        {
            found=true;
            st[i].updateMarks(password, marks);
        }
    }

    if(found==false)
    {
       cout<<"Student not found"<<endl;
    }

    for(int i=0; i<n; i++)
    {
        cout<<st[i].name<<" "<<st[i].section<<" "<<st[i].roll<<" "<<st[i].getMarks()<<endl;
    }
}
