#include<iostream>
#include<list>
using namespace std;

void showList(list<int>g)
{
    list<int>::iterator it;
    for(it=g.begin(); it!=g.end(); it++)
        cout<<"\t"<<*it;
    cout<<"\n";
}
int main()
{
    list<int>gqlist1,gqlist2;
    for(int i=0; i<5; i++)
    {

        gqlist1.push_back(i*2);
        gqlist2.push_front(i*3);
    }
    cout<<"\n List 1 (gqlist1) is : ";
    showList(gqlist1);
    cout<<"\n List 2 (gqlist2) is : ";
    showList(gqlist2);
    list<int>::iterator it;
    it=gqlist1.end();
    advance (it,-1);
    gqlist1.insert(it,5);
    gqlist1.erase(gqlist1.begin());
    cout<<"\n List 1 (gqlist1) is : ";
    showList(gqlist1);
    cout<<"\n List 2 (gqlist2) is : ";
    showList(gqlist2);

    cout<<"/n gqlist1.front():"<<gqlist1.front();
    cout<<"/n gqlist2.back() :"<<gqlist2.back();

}