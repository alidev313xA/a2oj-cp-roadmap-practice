// https://codeforces.com/problemset/problem/266/A
#include <bits/stdc++.h>
using namespace std; 

int main () {
    int n; 
    string s; 

    cin >> n; 
    cin >> s; 
    int count = 0;

    for (int i = 0; i < n - 1; i++) {
        // cout << "s[i] = " << s[i] << " " << "s[i+1] = " << s[i + 1]; 
        if (s[i] == s[ i + 1]) {
            count += 1; 
        }
    }
    cout << count; 
}
