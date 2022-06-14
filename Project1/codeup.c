#include<stdio.h>
int main()
{
    int na[10001] = { 0 };
    int num, a, e, i;
    scanf_s("%d", &num);

    for (i = 0; i < num; i++)
    {
        scanf("%d", &a);
        na[a]++;
    }

    for (i = 0; i < 10001; i++)
    {
        if (na[i] > 0) {
            printf("%d", i);
            break;
        }
    }
    return 0;
}
