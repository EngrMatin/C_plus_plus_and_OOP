#include<bits/stdc++.h>
using namespace std;

void printList(list<int> list1);

int main()
{
    list<int> list1, list2;

    list1.push_back(50);
    list1.push_front(40);
    list1.push_front(30);
    list1.push_back(60);
    list1.push_back(70);
    list1.push_back(80);
    list1.push_back(90);

    cout<<"List 1: "<<endl;
    printList(list1);
    cout<<endl;

    list1.pop_front();
    list1.pop_back();

    cout<<"List 1: "<<endl;
    printList(list1);
    cout<<endl;

    list<int> :: iterator it = list1.begin();
    cout<<list1.front()<<endl;
    cout<<list1.back()<<endl;
    advance(it, 4);
    cout<<*it<<endl<<endl;

    it = list1.begin();
    advance(it, 2);
    list1.insert(it, 200);
    list1.insert(it, 5, 500);
    cout<<"List 1: "<<endl;
    printList(list1);
    cout<<endl;

    list2.push_back(111);
    list2.push_back(222);
    list2.push_back(333);

    cout<<"\nList 2: "<<endl;
    printList(list2);
    cout<<endl;

    swap(list1, list2);
    cout<<"\nList 1: "<<endl;
    printList(list1);
    cout<<"\nList 2: "<<endl;
    printList(list2);
    cout<<endl;

    list<int> :: iterator it1 = list2.begin();
    list<int> :: iterator it2 = list2.begin();

    advance(it1, 2);
    advance(it2, 7);

    list2.erase(it1,it2);  //erase from it1(position 3) to it2(position 8) EXCLUDING it2

    cout<<"\nList 2: "<<endl;
    printList(list2);
    cout<<endl;

    return 0;
}

void printList(list<int> list1)
{
    list<int> :: iterator it;
    for(it=list1.begin(); it!=list1.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<endl;
}

/*

Iterators - begin(), end(), rbegin(), rend()
Capacity - size(), max_size(),  empty()
Element Access - front(), back(), advance()
Modifiers - assign(), push_back(), pop_back(), insert(), erase(), clear(), swap()

Vector -> Dynamic array
       -> Created in Heap memory
       -> initial declaration of size is not necessary
       -> increases size automatically as 1, 2, 4, 8, 16, 32 ......
       -> #include<vector>

List   -> Doubly Linked List

*/
