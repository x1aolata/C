#include<stdio.h>
#include<math.h>
int isPrime(int num);
int huiwen(int num);
void sort_bubble(int arr[],int n);
void sort_select(int arr[],int n);
void sort_bubblestr(char arr[][20],int n);

int main()
{
    printf("%d",huiwen(9));
     printf("%d",isPrime(9));
    return 0;
}
int isPrime(int num)
{
    if(num<=1)
    {
        return 0;
    }
    else if(num==2)
    {
        return 1;
    }
    else
    {
        int i;
        for (i=2; i<=sqrt(num); i++)
        {
            if(num%i==0)
            {
                return 0;
            }
        }
        return 1;
    }
}

int huiwen(int num)
{
    int s,y=0;
    s=num;
    while(s>0)
    {
        y=y*10+s%10;
        s=s/10;
    }

    if(y==num)
    {

        return 1;

    }
    else
    {

        return 0;
    }

}



void sort_bubble(int arr[],int n)
{
    int i,j;
    int flag;
    for(i=0; i<n-1; i++)
    {
        flag=1;
        for(j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                arr[j]=arr[j]+arr[j+1]-(arr[j+1]=arr[j]);
                flag=0;
            }
        }
        if(flag)
        {
            break;
        }
    }
}


void sort_select(int arr[],int n)
{
    int i,j;
    for(i=0; i<n; i++)
    {
        for(j=i; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                arr[i]=arr[i]+arr[j]-(arr[j]=arr[i]);
            }
        }
    }
}
void sort_bubblestr(char arr[][20],int n)
{
    int i,j;
    int flag;
    char temp[20];
    for(i=0; i<n-1; i++)
    {
        flag=1;
        for(j=0; j<n-i-1; j++)
        {

            if( strcmp(arr[j],arr[j+1])>0)
            {
                // arr[j]=arr[j]+arr[j+1]-(arr[j+1]=arr[j]);
                strcpy(temp,arr[j]);
                strcpy(arr[j],arr[j+1]);
                strcpy(arr[j+1],temp);

                flag=0;
            }
        }
        if(flag)
        {
            break;
        }
    }
}
