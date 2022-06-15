#include <stdio.h>
int main()
{
    int a, b = 0;
    scanf("%d", &a);
    if (a != 10)
    {
        while (a / 10 != 0)
        {
            a = a / 10;
            b++;
        }
        printf("%d", b + 1);
    }
    else
        printf("2");

    return 0;
}
