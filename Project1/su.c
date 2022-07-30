#include <stdio.h>
int main()
{
    int a, x, i, y, z, l, su;
    scanf("%d", &a);
    z = a;
    while (z % 3 != 0)
    {
        z++;
        if (z % 3 == 0)
        {
            x = z / 3;
        }
    }
    if (a % 3 == 0)
        x = a / 3;

    if (x % 2 == 0)
    {
        if (a % 6 == 0)
        {
            y = x * 3;
            l = (y / 2 * (x + 1));
            for (i = y; i > a; i--)
                l -= x;
            printf("%d", a * l + a / 3);
        }
        else
        {
            y = x * 3;
            l = (y / 2 * (x + 1));
            for (i = y; i > a; i--)
                l -= x;
            printf("%d", a * l);
        }
    }
    else
    {
        if (a % 3 == 0)
        {
            y = (a + 6) / 6;
            printf("%d", a * y * a + a / 3);
        }
        else
        {
            y = x * 3;
            l = (a + 6) / 6;
            su = 3 * l * (2 * l - 1);
            for (i = y; i > a; i--)
                su -= x;
            printf("%d", a * su);
        }
    }

    return 0;
}