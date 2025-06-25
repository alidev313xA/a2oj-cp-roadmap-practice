// https://codeforces.com/problemset/problem/236/A
#include <bits/stdc++.h>
using namespace std; 

int main() {
    string s; 
    cin >> s; 
    set<char> set; 

    for (char c: s) set.insert(c);     

    if (set.size() % 2 == 0) cout << "CHAT WITH HER!"; 
    else cout << "IGNORE HIM!"; 
}
