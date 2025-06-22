// https://codeforces.com/problemset/problem/144/A
#include <bits/stdc++.h>
using namespace std; 

int main() {
    int n; cin >> n; 
    vector<int> v(n); 
    
    for (int i = 0; i < n; i++) {
        cin >> v[i]; 
    }

    int maxVal = -1, maxIndex = -1; 
    int minVal = 101, minIndex = -1; 

    for (int i = 0; i < n; i++) {
        if(v[i] > maxVal) {
            maxVal = v[i]; 
            maxIndex = i; 
        }
    }

    for (int i = n- 1; i >= 0; i--) {
        if(v[i] < minVal) {
            minVal = v[i]; 
            minIndex = i; 
        }
    }

    int res = maxIndex + (n - 1 - minIndex); 
    if(maxIndex > minIndex) { // if the minIndex is before maxIndex it is swapped while taking maxIndex to the front so subtract 1 from original answer 
        res -= 1; 
    }

    cout << res; 
}
