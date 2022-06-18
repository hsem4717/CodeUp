#include <stdio.h>
int main()
{
    char c[100001];
    int a = 0, b = 0, i = 0;
    scanf("%s", &c);
    for (i = 0; c[i] != '\0'; i++)
    {
        if (c[i] == '(')
        {
            a++;
        }
        if (c[i] == ')')
        {
            b++;
        }
    }
    printf("%d %d", a, b);
    return 0;
}
