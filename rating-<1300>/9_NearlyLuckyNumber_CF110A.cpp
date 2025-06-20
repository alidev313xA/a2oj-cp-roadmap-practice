// https://codeforces.com/problemset/problem/110/A
#include <bits/stdc++.h>
using namespace std; 

int main () {
    long long num; 
    cin >> num; 

    string s = to_string(num); 
    int count = 0; 

    for (char d: s) {
        if (d == '4' || d == '7') {
            count += 1; 
        }
    }
     
    if(count == 4 || count == 7) {
        cout << "YES"; 
    }
    else {
        cout << "NO"; 
    }
}
