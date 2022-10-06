#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void solve2(int *arr, int start, int m)
{
    for (int i = 0; i < m; i++)
    {
        int flag=0;
        for (int j = start; j < i + 1; j++)
        {
            cout << arr[j] << " ";
            flag=1;
        }
        if(flag==1){
            cout << endl;


        }
    }
}
void solve()
{
    int k;
    cin >> k;
    int arr[k];
    for (int i = 0; i < k; i++)
    {
        int ele;
        cin >> ele;
        arr[i] = ele;
    }
    for (int i = 0; i < k; i++)
    {
        solve2(arr, i, k);
    }
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        solve();
    }

    return 0;
}