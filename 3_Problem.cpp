//SunLight problem

/*#include<bits/stdc++.h>
using namespace std;

int main(){
    multiset<double> m1;
    int n;
    cout << "Enter number of students: " << endl;
    cin >> n;
    while (n--)
    {
        double h;
        cin >> h;
        m1.insert(h);
    }
    cout << "Enter height of the student to be checked: "<< endl;
    double chh;
    cin >> chh;
    double p = (*m1.upper_bound(chh) - chh)/100;
        if (p < 0.2)
        {
            cout << "Student will face sunlight." << endl;
        }else
        {
            cout << "Student will not face sunlight." << endl;
        }
    
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d,e,A[100],B[100];
    cin>>a;
    while(a--){
        cin>>b>>c>>d;
        for(int i=0;i<b;i++){
            cin>>A[i];
        }
        for(int j=0;j<c;j++){
            cin>>B[j];
        }

        for(int i=0;i<b;i++){
            for(int j=0;j<c;j++){
                if(A[i]+B[j]<=d){
                    e++;
                }
            }
        }
        cout<<e<<endl;
    }


}