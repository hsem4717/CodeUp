#include <stdio.h>
char str[30];
int f(int k)
{
    if (k < 0) return 0;
    return f(k - 1) + (str[k] - '0');
}
int main()
{
    int n;
    scanf("%s", &str);
    n = strlen(str);
    printf("%d", f(n - 1));
    return 0;
}
