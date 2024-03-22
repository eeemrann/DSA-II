//Suppose there are some integers in a container. There are repetitions in the container that means a value can occur in multiple instances. You need to find the sum of the first and last unique elements in the container.

//Example: 23425 will output 8

//23234311 will output 4



#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_map<int, int> mp;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        mp[num]++;
    }
    for (const auto &[key, value] : mp) {
        if (value == 1) {
            a.push_back(key);
        }
    }
    if (a.size() == 0) {
        cout << 0 << endl;
    } else if (a.size() == 1) {
        cout << a.front() << endl;
    } else {
        cout << a.front() + a.back() << endl;
    }

    return 0;
}
