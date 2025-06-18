//https://codeforces.com/problemset/problem/32/B

#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;

    int n = s.length(); 
    string res = ""; 

    int i = 0;
    while (i < n) {
        if (s[i] == '.') {
            res += '0';
            i++; 
        }
        else if (s[i] == '-' && s[i+1] == '-') {
            res += '2'; 
            i += 2; 
        }
        else if(s[i] == '-' && s[i+1] == '.'){
            res += '1';
            i += 2;  
        }
    }

    cout << res; 
}
