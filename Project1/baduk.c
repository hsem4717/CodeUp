#include <stdio.h>
int main()
{
    int b, c, d, i, x, y;
    int a[20][20] = {};
    scanf("%d", &b);
    for (i = 1; i <= b; i++)
    {
        scanf("%d %d", &x, &y);
        a[x][y] = 1;
    }
    for (c = 1; c <= 19; c++)
    {
        for (d = 1; d <= 19; d++)
        {
            printf("%d ", a[c][d]);
        }
        printf("\n");
    }
    return 0;
}
