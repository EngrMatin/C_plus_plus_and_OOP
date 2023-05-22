#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int> v);

int main()
{
    vector<int> v;

    //v[0] = 5;    will not assign value .. runtime error.. as no such space is created yet
    //v[1] = 15;

    cout<<"v.size(): "<<v.size()<<endl;
    cout<<"v.capacity(): "<<v.capacity()<<endl;
    cout<<"v.max_size(): "<<v.max_size()<<endl;
    cout<<endl;

    v.push_back(100);
    v.push_back(200);

    cout<<"v.size(): "<<v.size()<<endl;
    cout<<"v.capacity(): "<<v.capacity()<<endl;
    cout<<"v.max_size(): "<<v.max_size()<<endl;
    cout<<endl;
    cout<<"The vector is: ";
    printVector(v);
    cout<<endl;

    v[0] = 5;
    v.push_back(300);
    v.push_back(400);
    v.push_back(500);
    v.push_back(600);

    cout<<"v.size(): "<<v.size()<<endl;
    cout<<"v.capacity(): "<<v.capacity()<<endl;
    cout<<"v.max_size(): "<<v.max_size()<<endl;
    cout<<endl;
    cout<<"The vector is: ";
    printVector(v);
    cout<<endl;

    cout<<"v[0]= "<<v[0]<<endl;
    cout<<"v.front()= "<<v.front()<<endl;
    cout<<endl;

    cout<<"v[v.size()-1]= "<<v[v.size()-1]<<endl;
    cout<<"v.back()= "<<v.back()<<endl;
    cout<<endl;

    vector<int> :: iterator it;          // iterator is a pointer
    it = v.begin();
    cout<<"it = v.begin() = *it = "<<*it<<endl;
    it = v.end()-1;       //last element is at v.end()-1
    cout<<"it = v.end() = *it = "<<*it<<endl;

    v.insert(v.begin()+1, 555);
    v.insert(v.end(), 999);
    //v.insert(v.begin(), 10, 333)  //insert 333 ten times from begin
    //v.erase(v.begin(), v.begin()+3); //erase from v.begin() to v.begin()+3 EXCLUDING v.begin()+3
    //sort(v.begin(), v.end());   //sort(start pointer, end+1 pointer) //In vector end() == index AFTER the last element
    //reverse(v.begin(), v.end()); // for sorting descending
    //sort(v.begin(), v.end(), greater<int>()); // for sorting descending

    cout<<"Printing the vector using Iterator: ";
    for(it=v.begin(); it!=v.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    cout<<"Printing the vector using Auto Iterator: ";
    for(auto it2=v.begin(); it2!=v.end(); it2++)        //declaration is not required
    {
        cout<<*it2<<" ";
    }
    cout<<endl;

    vector<int> v2;
    v2 = v;                  // same as v2.assign(v);
    cout<<"\nAfter v2=v, the vector v2 is: ";
    printVector(v2);
    cout<<endl;

    v2.pop_back();
    cout<<"\nAfter pop_back(), the vector v2 is: ";
    printVector(v2);
    cout<<endl;

    vector<int> v3;
    v3.push_back(11);
    v3.push_back(22);
    v3.push_back(33);
    cout<<"\nThe vector v3 is: ";
    printVector(v3);
    cout<<endl;
    swap(v2[0], v3[1]);
    cout<<"\nAfter swap(v2[0], v3[1])), the vector v3 is: ";
    printVector(v3);
    cout<<endl;

    swap(v2, v3);   //same as v2.swap(v3)
    cout<<"\nAfter swap(v2, v3)), the vector v3 is: ";
    printVector(v3);
    cout<<endl;

    v.resize(4);
    cout<<endl;
    cout<<"After v.resize(3), the vector is: ";
    printVector(v);
    cout<<endl;

    cout<<"As the v.resize() cannot erase memory, the last two element still exist in memory"<<endl;
    cout<<"Hence the vector in memory is still: ";
    for(int i=0; i<6; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v.shrink_to_fit();    //shrink the memory
    cout<<"\nAfter v.shrink_to_fit(), the vector IN MEMORY is: ";
    for(int i=0; i<6; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v.clear();    //to erase all elements of the vector;

    if(v.empty())
    {
        cout<<"\nThe Vector is empty"<<endl;
    }
    else
    {
        cout<<"\nThe vector is NOT empty"<<endl;
    }

    vector<int> v5;

    cout<<"Enter size for v5: ";
    int n;
    cin>>n;

    cout<<" Enter Elements for v5: ";
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        v5.push_back(a);
    }

    printVector(v5);

    cout<<"Enter size for v6: ";
    int n2;
    cin>>n2;
    vector<int> v6(n2); //create a vector of size n assigning all element with 0

    printVector(v6);

    cout<<"Enter values for v6: ";
    for(int i=0; i<n2; i++)
    {
        cin>>v6[i];
    }

    printVector(v6);

    vector<int> v7(n2, 67);  //create a vector of size n assigning all element with 67
    printVector(v7);

    return 0;
}

void printVector(vector<int> v)
{
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    cout<<"Using v.at(i), the vector is: ";
    for(int i=0; i<v.size(); i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}

/*

Iterators - begin(), end(), rbegin(), rend()
Capacity - size(), max_size(), resize(), capacity(), empty(), shrink_to_fit()
Element Access - [], at(), front(), back()
Modifiers - assign(), push_back(), pop_back(), insert(), erase(), clear(), swap()

Vector -> Dynamic array
       -> Created in Heap memory
       -> initial declaration of size is not necessary
       -> increases size automatically as 1, 2, 4, 8, 16, 32 ......
       -> #include<vector>

List   -> Doubly Linked List

*/
