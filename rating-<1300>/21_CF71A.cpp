// https://codeforces.com/contest/71/problem/A
#include <bits/stdc++.h>
using namespace std; 

int main() {
    int n; cin >> n; 
    vector<string> words(n); 
    for (int i = 0; i < n; i++) {
        cin >> words[i]; 
    }

    for (string word: words){
        int l = word.length(); 
        if (l > 10) cout << word[0] << l - 2 << word[l - 1] << "\n";  
        else cout << word << "\n"; 
    }
}
