

#include <stdio.h>

#include <math.h>

int main()

{

	float a,b,c,dis,x1,x2;

	printf("������a,b,c��ֵ�� ");

	scanf("%f %f %f",&a,&b,&c);

	dis=b*b-4*a*c;

	if(dis<0)

	{

		printf("Are you kidding me?\n");

		return 0;

	}

	else if(dis==0)

	{

		x1=x2=(-b)/(2*a);

		printf("Are you kidding me?\n");

	}

	else

	{

		x1=(-b+sqrt(dis))/(2*a);

		x2=(-b-sqrt(dis))/(2*a);

		printf("�ú������������ȵ�ʵ����");

	}

	if(dis>0)
	printf("x1=%f x2=%f\n",x1,x2);
	return 0;

}

