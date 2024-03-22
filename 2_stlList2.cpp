#include<bits/stdc++.h>
using namespace std;

void showList(list<int>l)
{
    auto i=l.begin();
    for(;i!=l.end();i++)
    {
        cout<<*i<<"";
    }
    cout<<endl;
}
int main(){
list<int>a,b;
for(int i=1;i<10;i*=2)
{
    a.push_back(i);
}
for(int i=1;i<10;i+=2){
    b.push_front(i);

}
showList(a);
showList(b);
cout<<"Front of a= "<<a.front()<<endl;
cout<<"Back of a= "<<a.back()<<endl;
a.pop_front();
cout <<"After pop_front, a= ";
showList(a);
b.pop_back();
cout<<"After pop_back, b= ";
list<int>::iterator itr=a.begin();
advance(itr,2);
a.insert(itr,52);
cout<<"After inserting 52 at pos.2, a= ";
showList(a);

cout<<"Size of a = "<<a.size()<<endl;
cout<<"Size of b = "<<b.size()<<endl;
}
