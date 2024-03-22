#include<bits/stdc++.h>
using namespace std;

int main()
{
stack<int>stack1, stack2;
stack1.push(21);
stack1.push(22);
stack1.push(24);
stack1.push(25);
int num=0;
stack1.push(num);
stack2=stack1;
while(!stack2.empty()){
    cout<<stack2.top()<<" ";
    stack2.pop();
}
cout<<endl;
stack1.pop();
stack1.pop();
stack1.pop();

while(!stack1.empty()){
        cout<<stack1.top()<<" ";
        stack1.pop();
}

}