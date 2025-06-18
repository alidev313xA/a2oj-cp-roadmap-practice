// https://codeforces.com/problemset/problem/263/A
// Tip: Calculate the manhatton distance from cordinates where the 1 lies and the cordinates (2, 2). 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x = 2, y = 2;  // cordinates (2, 2) or center of the matrix 

    vector<vector<int>> matrix(5, vector<int>(5));
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int a;
            cin >> a;
            matrix[i][j] = a;
            if (matrix[i][j] == 1)
            {
                x = i; // x cordinate of 1 
                y = j; // y cordinate of 1
            }
        }
    }

    cout << abs(2 - x) + abs(2 - y); // manhatton distance from center to where one lies 
}
