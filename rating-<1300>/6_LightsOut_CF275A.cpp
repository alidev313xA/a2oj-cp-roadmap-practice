// https://codeforces.com/problemset/problem/275/A
#include<bits/stdc++.h>
using namespace std; 

int main() {
    vector<vector<int>> m(3, vector<int>(3)); 
    for (int i= 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            m[i][j] = 1; 
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int a; 
            cin >> a; 
            
            if(a % 2 == 1) {
                m[i][j] ^= 1; 

                if (j > 0) m[i][j-1] ^= 1; 
                if (j < 2) m[i][j+1] ^= 1; 
                if (i < 2) m[i+1][j] ^= 1; 
                if (i > 0) m[i-1][j] ^= 1; 
            } 
        } 
    }

    for (int i= 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << m[i][j];  
        }
        cout << "\n"; 
    }
}
