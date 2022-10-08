
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int k, c;
        cin >> k;
        vector<int> arr;
        cin >> c;
        for (int w = 0; w < k; w++)
        {
            int temp;
            cin >> temp;
            arr[w] = temp;
        }
        arr[k + 1] = c;
        sort(arr.begin(), arr.end());
        auto it = find(arr.begin(), arr.end(), k);
        int ans = 0;

        int index1 = it - arr.begin();
        int index2 = arr.end() - it;
        int diff = abs(index1 - index2);
        cout << diff;
    }
    return 0;
}
