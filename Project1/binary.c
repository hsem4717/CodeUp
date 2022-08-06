#include <stdio.h>
int main()
{
    int a[255] = { 0 }, i = 0, n;
    scanf("%d", &n);
    if (n == 0) {
        printf("0");
    }
    while (n > 0) {
        a[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        printf("%d", a[j]);

}
