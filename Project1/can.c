#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int b = a / 10;
    int c = a % 10;
    int j = (c * 10 + b) * 2;
    if (j > 100)
        j -= 100;
    printf("%d\n", j);
    if (j > 50)
    {
        printf("OH MY GOD");
    }
    if (j <= 50)
    {
        printf("GOOD");
    }
}
