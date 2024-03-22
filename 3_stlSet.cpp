#include<bits/stdc++.h>
using namespace std;

int main(){
    //set<int> --> ascending order
set<int,greater<int>>s1;//dscending order
s1.insert(40);
s1.insert(30);
s1.insert(60);
s1.insert(20);
s1.insert(50);
//only one 50 will be added
s1.insert(50);
s1.insert(10);
//printing set s1
set<int,greater<int>>::iterator i;
cout<< "\nThe set s1 is: \n";
for(i=s1.begin();i!=s1.end();i++){
    cout<<*i<<" ";
}
cout<< endl;
//assigning the elements of the set s2

set<int> s2(s1.begin(),s1.end());
//print all elements of the set s2

cout<<"\nThe set s2 after assign from s1 to s2:\n";
for(i=s2.begin();i!=s2.end();i++){
    cout<< *i<<" ";
}
cout<< endl;
//remove AL ELEMENTS UPTO 30 IN S2
cout<<"\ns2 after removal of elements less than 30" ":\n";
s2.erase(s2.begin(),s2.find(30));
for(i=s2.begin();i!=s2.end();i++){
    cout<<*i<<" ";
}
cout<<endl;

//lower bound and upper bound for set1

cout<<"s1.lower_bound(40):"
<<*s1.lower_bound(40)<<endl;
cout<<"s2.upper_bound(40):"
<<*s2.lower_bound(40)<<endl;

return 0;
}