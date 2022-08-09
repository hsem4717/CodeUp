#include "stdio.h"
int main()
{
    int a[101][101] = {};
    int n, m;
    scanf("%d %d", &n, &m);
    int x = 1;
    int k = 1;
    for (int i = m; i >= 1; i--)
    {
        if (k % 2 == 1)
        {
            for (int j = 1; j <= n; j++)
            {
                a[j][i] = x;
                x++;
            }
        }
        else
        {
            for (int j = n; j >= 1; j--)
            {
                a[j][i] = x;
                x++;
            }
        }
        k++;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
