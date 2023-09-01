#include <stdio.h>

int main(void)
{
	int n = 0;
	scanf_s("%d", &n);

	for (int i = 0; i <= n; i++)
	{
		printf("\n");
		for (int j = 0; j < i; j++)
		{
			printf("*");
		}
	}
	return 0; 
}