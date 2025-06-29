// https://codeforces.com/problemset/problem/139/A
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n ; cin >> n ;

    vector<int> v(7); 
    for (int i = 0; i < 7; i++) cin >> v[i];


    while (n > 0) {
        for (int i = 0; i < 7; i++) {
            n -= v[i]; 
            if (n <= 0){
                cout << i + 1<< "\n"; 
                return 0; 
            } 
        }
    }
    return 0;
}
