https://codeforces.com/problemset/problem/59/A
#include <bits/stdc++.h>
using namespace std; 

int main () {
    string s; 
    cin >> s; 

    int upper = 0, lower = 0; 

    for (char c: s) {
        if(isupper(c)) {
            upper++; 
        }
        else {
            lower++;
        }
    }

    for (char &c: s) {
        c = (upper > lower) ? toupper(c) : tolower(c); 
    } 

    cout << s << "\n"; 
}
            cout << m[i][j];  
        }
        cout << "\n"; 
    }
}
