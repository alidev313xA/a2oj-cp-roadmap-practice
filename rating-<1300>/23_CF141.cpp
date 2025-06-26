// https://codeforces.com/problemset/problem/141/A
#include <bits/stdc++.h>
using namespace std; 
 
int main() {
    string s1 , s2, s3; 
    cin >> s1 >> s2 >> s3; 
   
    map<char, int> freq;  
    for (char c: s1 + s2) { 
        freq[c]++;
    }; 
    
    int extra = s3.length(); 
    
    for (char c: s3) {
        if (freq[c] != 0){
            extra--; 
            freq[c]--;
        } 
    }
    
    for (auto it: freq) {
        if (it.second != 0 || extra != 0) {
            cout << "NO"; 
            return 0;  
        }
    }
 
    cout << "YES"; 
}
