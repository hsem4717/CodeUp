#include <stdio.h>
int main()
{
    int a[51][51] = {};
    int n;
    scanf("%d", &n);
    int x = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[j][i] = x++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
