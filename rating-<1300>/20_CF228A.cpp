 // https://codeforces.com/problemset/problem/228/A
#include <bits/stdc++.h> 
using namespace std; 

int main() {
    unordered_set<int> set; 
    for (int i = 0; i < 4; i++) {
        int a; cin >> a; 
        set.insert(a); 
    }
    cout << 4 - set.size() << "\n"; 
}
