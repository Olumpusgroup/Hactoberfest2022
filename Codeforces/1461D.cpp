// https://codeforces.com/problemset/problem/1461/D
// D. Divide and Summarize

#include <bits/stdc++.h>
using namespace std;

void populate_pmodulo(vector<int> &A, unordered_set<long long> &psum)
{
  long long sum = 0;
  int asize = A.size();
  for (int i = 0; i < asize; i++)
  {
    sum += A[i];
  }
  psum.insert(sum);

  int minm = *min_element(A.begin(), A.end());
  int maxm = *max_element(A.begin(), A.end());

  if (minm == maxm)
    return;

  int avg = (minm + maxm) / 2;

  vector<int> lthan, gthan;
  for (int i = 0; i < asize; i++)
  {
    if (A[i] <= avg)
      lthan.push_back(A[i]);
    else
      gthan.push_back(A[i]);
  }

  populate_pmodulo(lthan, psum);
  populate_pmodulo(gthan, psum);
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, q;
    cin >> n >> q;
    vector<int> A(n), Q(q);
    for (int i = 0; i < n; i++)
    {
      cin >> A[i];
    }
    for (int i = 0; i < q; i++)
    {
      cin >> Q[i];
    }
    unordered_set<long long> psum;
    populate_pmodulo(A, psum);

    for (int i = 0; i < q; i++)
    {
      if (psum.count(Q[i]) == 1)
      {
        cout << "Yes" << endl;
      }
      else
      {
        cout << "No" << endl;
      }
    }
  }
}