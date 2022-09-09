#include <stdio.h>
int main()
{
    int r, g, b;
    scanf("%d %d %d", &r, &g, &b);
    printf("%.2f MB", (double)r * g * b / 8 / 1024 / 1024);
    return 0;
}
