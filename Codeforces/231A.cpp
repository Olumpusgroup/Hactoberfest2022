// https://codeforces.com/problemset/problem/231/A
// A. Team

#include<iostream>

using namespace std;

int main() {
    int p, v, t;
    int n;
    int result = 0;
    while (n--)
    {
        cin >> p >> v >> t;
        
        if(p+v+t > 2) {
            result += 1;
        }
    }
    cout << result;
    return 0;
}