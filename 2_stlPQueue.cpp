#include<bits/stdc++.h>
using namespace std;

void showQueue(priority_queue<int> q)
{
    while (!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;
}

void showMinQueue(priority_queue<int, vector<int>, greater<int>> q)
{
    while (!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;
}

int main()
{
    priority_queue<int> pq;

    pq.push(52);
    pq.push(42);
    pq.push(8);
    pq.push(39);
    pq.push(30);

    cout << "After inserting elements into prio. queue: ";
    showQueue(pq);

    // min heap
    priority_queue<int, vector<int>, greater<int>> b;

    b.push(12);
    b.push(19);
    b.push(2);
    b.push(9);
    b.push(30);


    cout << "After inserting elements into prio. queue (min heap): ";
    showMinQueue(b);

    return 0;
}