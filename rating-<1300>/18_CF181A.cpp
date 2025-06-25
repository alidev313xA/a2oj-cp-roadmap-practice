// https://codeforces.com/problemset/problem/116/A
#include <bits/stdc++.h>
using namespace std; 

int main () {
    int n; 
    cin >> n; 
    // vector<vector<int>> a(n, vector<int>(2)); 
    int p = 0 ;
    int c = 0;

    for (int i = 0; i < n; i++) {
        int l, e; // leave and enter 
        cin >> l >> e; 
        p += (e - l);  
        if ( p > c) {
            c = p; 
        }
    }
    cout << c << " "; 
}
