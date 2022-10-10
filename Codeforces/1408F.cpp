// https://codeforces.com/problemset/problem/1408/f
// F. Two Different

#include <bits/stdc++.h>

using namespace std;

void totalNumberOfPairs(list<int> &A, int &numberOfPairs, vector<vector<int>> &pairs)
{
    if (A.size() <= 1)
        return;

    int front = A.front();
    int back = A.back();

    pairs.insert(pairs.end(), {front, back});
    numberOfPairs++;

    A.pop_front();
    A.pop_back();

    totalNumberOfPairs(A, numberOfPairs, pairs);
}

int main()
{
    int n;
    int numberOfPairs = 0;
    cin >> n;
    list<int> A;

    for (int i = 1; i <= n; i++)
        A.push_back(i);

    vector<vector<int>> pairs;
    totalNumberOfPairs(A, numberOfPairs, pairs);

    cout<<numberOfPairs<<endl;

    for (vector<int> pairs1D : pairs)
    {
        for (int x : pairs1D)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}