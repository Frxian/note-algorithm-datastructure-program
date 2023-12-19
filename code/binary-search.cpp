#include "common"

int main(void)
{
    int a[]{2, 4, 8, 44, 55, 100};
    // int a[]{2, 4, 8, 9, 33, 55, 100};
    int x = 8;
    int l = 0, r = 5, m = 0;
    bool found = false;

    // Naive algorithm
    while (l <= r && !found)
    {
        m = (l + r) / 2;

        if (x == a[m])
        {
            found = true;
        }
        else if (x > a[m])
        {
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }

    OUT((a[l] == x || a[m] == x));

    // Faster algorithm
    r = 6;
    while (l < r)
    {
        m = (l + r) / 2;
        if (a[m] < x)
            l = m + 1;
        else
            r = m;
    }
    OUT((a[r] == x));

    return 0;
}
