#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int copy(int a, int n)
{
	double i;
	int sum=0;
	for (i = 0; i < n; i++)
	{
		sum += a * pow(10, i);

	}
return sum;
}

int main()
{
	int a, n, S = 0;
	int i, j;
	scanf("%d %d", &a, &n);


for (i=1;i<n+1;i++)
	{
		S += copy(a, i);


	}
	printf("%d", S);


	return 0;
}
