
#include <stdio.h>

int max( int a, int b, int c );


main()

{

	int a,b,c;

	printf("��������������\n");

	scanf("%d %d %d",&a,&b,&c);

	printf("�������ǣ�%d\n",max(a,b,c));



}

int max( int a, int b, int c )

{

	int temp;

	if( a > b && a > c )

		temp = a;

	if( b > a && b > c )

		temp = b;

	if( c > a && c > b )

		temp = c;

	return temp;

}

