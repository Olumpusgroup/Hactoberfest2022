// https://codeforces.com/problemset/problem/331/C1
// C1. The Great Julya Calendar

#include <bits/stdc++.h>

using namespace std;

int get_largest_digit(int m) {
    int largest = 0;
    while (m) {
        largest = max(largest, m % 10);
        m /= 10;
    }
    return largest;
}

int getFinalCount(int m)
{
    static int count = 0;
    if (m == 0)
        return 0;

    int max = get_largest_digit(m);
    count++;
    getFinalCount(m - max);

    return count;
}

int main()
{
    int n;
    cin >> n;
    cout << getFinalCount(n) << endl;
}