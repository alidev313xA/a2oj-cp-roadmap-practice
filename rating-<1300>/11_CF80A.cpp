// https://codeforces.com/problemset/problem/80/A
// Find the smallest next prime of n, and check if it is m. 
#include <bits/stdc++.h>
using namespace std; 
bool isPrime(int n) {
    int count = 0; 

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++; 
        } 
    }
    if(count == 2) return true;
    return false;  
 }

int nextPrime(int n) {
    while(true) {
        n++; 
        if (isPrime(n)) return n; 
    }
    return n;  
}

int main () {
    int n, m; 
    cin >> n >> m; 
    
    int next = nextPrime(n); 

    if (next == m) {
        cout << "YES"; 
    }
    else {
        cout << "NO"; 
    }
}
