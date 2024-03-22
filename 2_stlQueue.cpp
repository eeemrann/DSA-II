#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printQueue(queue<int>q)
{
    queue<int>temp=q;
    while(!temp.empty())
    {
        cout<<temp.front()<<"";
        temp.pop();
    }
    cout << endl;
}

int main()
{
    queue<int>q1,q2;
    q1.push(1);
    q1.push(2);
    q1.push(3);

    cout<<"First queue: "<<endl;
    printQueue(q1);

    q2.push(4);
    q2.push(5);
    q2.push(6);
    cout<<"\nSecond queue: "<<endl;
    printQueue(q2);

    q1.swap(q2);
    cout<<"\nAfter swapping: "<<endl;
    cout<<"\nFirst queue: "<<endl;
    printQueue(q1);
    cout<<"\nSecond queue: "<<endl;
    printQueue(q2);
}

