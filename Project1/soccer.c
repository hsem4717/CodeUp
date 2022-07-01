#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int result = (90 - a) / 5 + b;
    if (a % 10 == 0)
    {
        printf("%d", result);
    }
    else
    {
        printf("%d", result + 1);
    }
    return 0;
}
