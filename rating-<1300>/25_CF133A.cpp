// https://codeforces.com/problemset/problem/133/A
#include <bits/stdc++.h>
using namespace std; 

int main() {
    string s; 
    cin >> s; 
  
    set<char> st;  
    st.insert('H');
    st.insert('Q');
    st.insert('9');
   // st.insert('+');

    for (char c: s) {
        if (st.count(c) != 0) {
            cout << "YES"; 
            return 0; 
        }
    }
    cout << "NO"; 
}
