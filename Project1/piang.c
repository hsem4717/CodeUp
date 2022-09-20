# include <stdio.h>
int main()
{
	int i, j, n, m;
	char c;
	scanf("%d %d %c", &n, &m, &c);
	if (c == 'L')
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < i; j++)
			{
				printf(" ");
			}
			for (j = 1; j <= m; j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	else if (c == 'R')
	{
		for (i = 1; i <= n; i++)
		{
			for (j = n - i; j >= 1; j--)
			{
				printf(" ");
			}
			for (j = 1; j <= m; j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}
