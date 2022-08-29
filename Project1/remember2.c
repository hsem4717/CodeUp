#include <stdio.h>
int main()
{
    int a, c, i, d, e;
    int b[10000001] = { 0, };
    scanf("%d", &a);
    for (i = 0; i < a; i++)
    {
        scanf("%d", &c);
        b[c] = 1;
    }
    scanf("%d", &e);
    for (i = 0; i < e; i++)
    {
        scanf("%d", &d);
        printf("%d ", b[d]);
    }
    return 0;
}
