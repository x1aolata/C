#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
struct people {
	long age;
	char name[15];
	char phone[20];

};
int main()
{
	struct people p[12];
	struct people temp;
	int i,k, n;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s %d %s", p[i].name, &p[i].age, p[i].phone);
	}
	for (i = 0; i < n; i++)
	{
		for (k = 0; k < n - i - 1; k++)
		{
			if (p[k].age >p[k + 1].age)
			{
				temp = p[k];
				p[k] = p[k + 1];
				p[k + 1] = temp;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%s %d %s\n", p[i].name, p[i].age, p[i].phone);
	}

	return 0;
}

