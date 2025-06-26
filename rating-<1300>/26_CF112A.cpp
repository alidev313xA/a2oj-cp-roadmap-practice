// https://codeforces.com/problemset/problem/112/A
# include <bits/stdc++.h>
using namespace std; 
int main () {
    string s1, s2; 
    cin >> s1 >> s2;
    for (char &c: s1) c = tolower(c);
    for (char &c: s2) c = tolower(c);

    // cout << s1 << " " << s2;     
    int res = 0; // first string is smaller than second 

    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] > s2[i]) {
            res = 1; 
            break; 
        }
        else if (s1[i] < s2[i]) {
            res = -1;
            break;  
        }
    }

    cout << res << " "; 
}
