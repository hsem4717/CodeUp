#include <stdio.h>
int main()
{
    int a, b, n;
    int i, j;
    scanf("%d", &a);
    for (i = a; i >= 1; i--)
    {
        for (n = a; n > i; n--)
        {
            printf(" ");
        }
        for (b = i; b > 0; b--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
