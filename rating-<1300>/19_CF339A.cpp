// https://codeforces.com/problemset/problem/339/A
#include <bits/stdc++.h>
using namespace std; 

int main () {
    string s; 
    cin >> s; 
    vector<int> nums; 

    for (char c: s) {
        if (c != '+') nums.push_back(c - '0'); 
    }
    sort(nums.begin(), nums.end()); 

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i];
        if (i < nums.size() - 1) cout << "+";  
    }
}
