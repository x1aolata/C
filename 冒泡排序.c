#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	int num[10];
	scanf("%d", &n);
	int i, j;
	int temp;
	for (i = 0; i < n; i++)
		scanf("%d", &num[i]);
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)

			if (num[j] > num[j + 1])
			{
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}

	}
	for (i = 0; i < n; i++)
		printf("%d ", num[i]);
}
