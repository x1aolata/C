#include <stdio.h>
int main()
{

    int a[][6]= {{43,123,45,23,2,3},{23,123,45,23,2,3}} ;
    int w;
    int *p;
    int **q;
    p=a;
  q=&w;
    printf("%p\n",q);
   printf("%p\n",&w);
//  int (*ptr)[6];
 //   ptr=a[0];
    /* printf("%p\n",p);
     p++;
     printf("%p\n",p);

     p=a[0];
     printf("222222222222222222222\n");
     printf("%p\n",p);
     p++;
     printf("%p\n",p);*/
    for(p=a; p<a+2; p++)
    {
        printf("%d\n",*p);
    }



    return 0;
}
void sort_select(int arr[],int n)
{
    int i,j;
    int min;
    arr++;
    arr++;
    for(i=0; i<n-1; i++)
    {
        min=i;
        for(j=i+1; j<n; j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            arr[i]=arr[i]+arr[min]-(arr[min]=arr[i]);
        }
    }
}
