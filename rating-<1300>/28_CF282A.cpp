// https://codeforces.com/contest/282/problem/A
#include <bits/stdc++.h>
using namespace std; 

int main() {
    int n; 
    cin >> n; 
    int x = 0; 

    for (int i = 0; i < n; i++) {
        string s; 
        cin >> s; 

        if (s == "X++" || s == "++X") {
            x++; 
        }
        else {
            x--; 
        }
    }

    cout << x << " "; 
}
