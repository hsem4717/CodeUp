#include <stdio.h>
int main()
{
    int a, i, c, b = 0;
    scanf("%d", &a);
    for (i = a; i >= 1; i--)
    {
        b += i;
    }
    for (i = 1; i < a; i++)
    {
        scanf("%d", &c);
        b -= c;
    }
    printf("%d", b);
    return 0;
}
