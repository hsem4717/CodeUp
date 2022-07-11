#include <stdio.h>

int main()
{
	int a[101], i, n, x;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (x = 0; x < 2; x++)
	{
		for (i = 0; i < n; i++)
			printf("%d ", a[i]);
	}
	return 0;
}
