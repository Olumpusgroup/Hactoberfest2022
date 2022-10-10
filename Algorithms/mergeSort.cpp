#include <cstdio>
#include <algorithm>

using namespace std;

int n, k, a[100010];

void f(int x, int y)
{
    if (k && x + 1 < y)
    {
        k -= 2;
        int m = (x + y) / 2;
        swap(a[m - 1], a[m]);
        f(x, m);
        f(m, y);
    }
}

int main()
{
    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++)
        a[i] = i + 1;

    if (k % 2 == 0)
    {
        printf("-1\n");
        return 0;
    }

    k--;
    f(0, n);

    if (k)
    {
        printf("-1\n");
        return 0;
    }
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}