#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> gquiz1;

    gquiz1.insert({1,40});
    gquiz1.insert({2,30});
    gquiz1.insert({3,60});
    gquiz1.insert({5,50});
    gquiz1.insert({4,20});
    gquiz1.insert({6,50});

    //another way of inserting

    gquiz1[7]=10;

    //print map gquiz1
    map<int, int>::iterator i;
    cout<<"\nThe map quiz is: \n";
    cout<<"\tKEY\tELEMENT\n";
    for(i=gquiz1.begin(); i!=gquiz1.end(); i++)
    {
        cout<<'\t'<<i->first<<'\t'<<i->second<<'\n';
    }
    cout<<endl;

    map<int, int>gquiz2(gquiz1.begin(),gquiz1.end());
    cout<<"\nThe map gquiz2 after "<<"assigning from gquiz1 is: \n";
    cout<<"\tKEY\tELEMENT\n";
    for(i=gquiz2.begin(); i!=gquiz2.end(); i++)
    {
        cout<<'\t'<<i->first<<'\t'<<i->second<<'\n';
    }
    cout<<endl;

    //removal all elements upto
    // element with key=3 in gquiz2
    cout<<"\ngquiz2 after removal of elements less than key=3 : \n";
    cout<<"\tKEY\tELEMENT\n";
    gquiz2.erase(gquiz2.begin(),gquiz2.find(3));
    for(i=gquiz2.begin();i!=gquiz2.end();i++){
        cout<<'\t'<<i->first<<'\t'<<i->second<<'\n';
    }
    // remove all elements with key = 4
    int num;
    num = gquiz2.erase(4);
    cout << "\ngquiz2.erase(4) : ";
    cout << num << " removed \n";
    cout << "\tKEY\tELEMENT\n";
    for (i = gquiz2.begin(); i != gquiz2.end(); ++i) {
        cout << '\t' << i->first << '\t' << i->second
             << '\n';
    }
 
    cout << endl;
 
    // lower bound and upper bound for map gquiz1 key = 5
    cout << "gquiz1.lower_bound(5) : "
         << "\tKEY = ";
    cout << gquiz1.lower_bound(5)->first << '\t';
    cout << "\tELEMENT = " << gquiz1.lower_bound(5)->second
         << endl;
    cout << "gquiz1.upper_bound(5) : "
         << "\tKEY = ";
    cout << gquiz1.upper_bound(5)->first << '\t';
    cout << "\tELEMENT = " << gquiz1.upper_bound(5)->second
         << endl;
 
    return 0;



}
