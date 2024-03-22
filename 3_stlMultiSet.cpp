#include<bits/stdc++.h>
using namespace std;
 int main(){
 multiset<int,greater<int>>gquiz1;

 gquiz1.insert(40);
 gquiz1.insert(30);
 gquiz1.insert(60);
 gquiz1.insert(20);
 gquiz1.insert(50);
 //50 will be added align to
 //the multiset unlike set
 gquiz1.insert(50);
 gquiz1.insert(10);

 //printing multiset gquiz1
 multiset<int, greater<int>>::iterator i;
 cout<<"\nThe multiset gquiz1 is: \n";
 for(i=gquiz1.begin();i!=gquiz1.end();i++){
    cout<<*i<<" ";
 }
 cout<<endl;

 //assigning the elements from gquiz1 to gquiz2
 multiset<int>gquiz2(gquiz1.begin(),gquiz1.end());
 //print all ements of the multiset gquiz2
 cout<<"\nThe multiset gquiz\n"
 "after assign from gquiz1 is: \n ";
 for(i=gquiz2.begin();i!=gquiz2.end();i++){
    cout<<*i<<" ";
 }
 cout<< endl;

 //remove all elements upto 30 in gquiz2

 cout<<"\ngquiz after removal\n"
 "of elements less than 30: \n";

 gquiz2.erase(gquiz2.begin(),gquiz2.find(30));
 for(i=gquiz2.begin();i!=gquiz2.end();i++){
    cout<<*i<<" ";
 }
 cout<<endl;

//lower bound AND upper bound for multiset for gquiz1
 cout<<"\nngquiz1.lower_bound(40):\n"
 <<*gquiz1.lower_bound(40)<<endl;
 cout<<"\nngquiz1.upper_bound(40):\n"
 <<*gquiz1.upper_bound(40)<<endl;

//lower bound AND upper bound for multiset for gquiz2
cout<<"\nngquiz2.lower_bound(40):\n"
 <<*gquiz1.lower_bound(40)<<endl;
 cout<<"\nngquiz2.upper_bound(40):\n"
 <<*gquiz1.upper_bound(40)<<endl;
 }