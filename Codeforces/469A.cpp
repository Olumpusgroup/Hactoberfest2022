// https://codeforces.com/problemset/problem/469/A
// A. I Wanna Be the Guy

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, p, q, a, b, d[100];
    cin >> n >> p;
    
    for (int i = 0; i < p; i++)
    {
        cin >> a;
        d[a - 1] = 1;
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> b;
        d[b - 1] = 1;
    }
    if (*min_element(d, d + n) == 1)
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }
}