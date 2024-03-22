#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int
main ()
{
    vector < int >v;
    for (int i = 1; i <= 5; i++)
        v.push_back (i);
    cout << "Output of begin and end: ";
    for (auto i = v.begin (); i != v.end (); i++)
        cout << *i << " ";
    cout << "\nSize: " << v.size ();
    cout << "\nCapacity: " << v.capacity ();
    if (v.empty () == false)
        cout << "\nVector is not empty";
    else
        cout << "\nVector is empty";
    cout << "\nReference operator [g]: v[2] = " << v[2];
    cout << "\nAt: g1.at(4) = " << v.at (4);
    cout << "\nfront(): g1.front() = " << v.front ();
    cout << "\nback():g1.back() = " << v.back ();
    v.push_back (15);
    int n = v.size ();
    cout << "\nThe last element is: " << v[n - 1];
    v.pop_back ();
    cout << "\nThe vector elements are: ";
    for (int i:v)
        cout << v[i-1]<<" ";
    v.insert (v.begin (), 5);
    cout << "\nThe first element is: " << v[0];
    v.erase (v.begin ());
    cout << "\nThe first element is: " << v[0];
    vector < int >v1{1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
    sort (v1.begin (), v1.end ());
    cout << "\nSorted \n";
    for (auto i:v1)
        cout << i << " ";
    sort (v1.begin (), v1.end (), greater < int >());
    cout << "\nSorted dec \n";
    for (auto i:v1)
        cout << i << " ";
    return 0;
} 