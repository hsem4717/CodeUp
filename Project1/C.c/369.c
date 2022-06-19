#include <stdio.h>
int main()
{
    int a, i;
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        printf(i % 3 == 0 ? "X " : "%d ", i);
    }

    return 0;
}
