#include <stdio.h>
int main()
{

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if ((b - a) > c) { printf("advertise"); }
    else if ((b - a) == c) { printf("does not matter"); }
    else { printf("do not advertise"); }
    return 0;
}
