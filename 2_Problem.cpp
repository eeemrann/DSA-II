//Palindrome


#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    queue<char> q;
    list<char> l;
    for (auto c : s) {
        l.push_back(c);
    }
    for (auto c : s) {
        q.push(c);
    }
    l.pop_back();
    q.pop();
    while (!q.empty()) {
        if (q.front() != l.back()) {
            return false;
        }
        q.pop();
        l.pop_back();
    }
    return true;
}

int main() {
    string s = "abnba";
    if (isPalindrome(s)) {
        cout << s << " is a palindrome.\n";
    } else {
        cout << s << " is not a palindrome.\n";
    }
}
