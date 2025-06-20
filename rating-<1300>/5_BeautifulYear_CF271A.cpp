// https://codeforces.com/problemset/problem/271/A
// Tip: Start with the current year and keep incrementing it, also check if its the beautiful year. 
#include <bits/stdc++.h>
using namespace std;

bool hasDistictDigits(int y) {
    string s = to_string(y); 
    set<char> set(s.begin(), s.end()); 

    return set.size() == s.length(); // year has distinct digits, so its the Beautiful Year
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int y; 
    cin >> y; 

    while(1) {
        y++; 
        if (hasDistictDigits(y)) {
            cout << y << endl; 
            break; 
        }
    }
}
 
