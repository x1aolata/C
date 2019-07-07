#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
typedef struct date
{
    int year;
    int month;
    int day;
} Data;
int isleapyear(int year);//计算是否为闰年
int islegal(Date a); //计算日期是否合法
int calcday(Date a);//计算日期是当年的第几天，用于计算两个日期之间天数的差值
int main()
{
    system("color 02");

    Data first;
    Data second;
    int dayofmonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};//用于一维数组表示一年每月含有的天数
    printf("Please input the first date:");
    scanf("%d %d %d",&first.year,&first.month,&first.day);
    printf("Please input the second date:");
    scanf("%d %d %d",&second.year,&second.month,&second.day);
    printf("%d %d %d",first.year,first.month,first.day);

    printf("Day between two dates:%d",calcday(first)-calcday(second));
}
int isleapyear(int year)
{
    int a;
    if(year%400==0)
        a=1;
    else
    {
        if(year%4==0&&year%100!=0)
            a=1;
        else
            a=0;
    }

    return a;
}
int islegal(Date a)
{
    int year=a.year;

    int month=a.month;
    int day=a.day;
    switch(month)
    {
    case 1:
        if (day<1 || day>31)
        {
            return 1;
        }
        else
        {
            return 2;
        };
        break;
    case 2:
        if ((year%4==0&&year%100!=0)||year%400==0)
        {
            if(day<1  || day>29)
            {
                return 1;
            }
            else
            {
                return 2;
            }
        }
        else
        {
            if(day<1 || day>28)
            {
                return 1;
            }
            else
            {
                return 2;
            }
        };
        break;
    case 3:
        if (day<1 || day>31)
        {
            return 1;
        }
        else
        {
            return 2;
        };
        break;
    case 4:
        if (day<1 || day>30)
        {
            return 1;
        }
        else
        {
            return 2;
        };
        break;
    case 5:
        if (day<1 || day>31)
        {
            return 1;
        }
        else
        {
            return 2;
        };
        break;
    case 6:
        if (day<1 || day>30)
        {
            return 1;
        }
        else
        {
            return 2;
        };
        break;
    case 7:
        if (day<1 || day>31)
        {
            return 1;
        }
        else
        {
            return 2;
        };
        break;
    case 8:
        if (day<1 || day>31)
        {
            return 1;
        }
        else
        {
            return 2;
        };
        break;
    case 9:
        if (day<1 ||day>30)
        {
            return 1;
        }
        else
        {
            return 2;
        };
        break;
    case 10:
        if (day<1 || day>31)
        {
            return 1;
        }
        else
        {
            return 2;
        };
        break;
    case 11:
        if (day<1 || day>30)
        {
            return 1;
        }
        else
        {
            return 2;
        };
        break;
    case 12:
        if (day<1 || day>31)
        {
            return 1;
        }
        else
        {
            return 2;
        };
        break;
    default:
        return 1;
        break;
    }
}
int calcday(Date a)
{
    if (islegal(a))
        else
        {
            switch(a.month)
            {
            case 1:
                q=day;
                break;
            case 2:
                q=31+day;
                break;
            case 3:
                q=31+28+day;
                break;
            case 4:
                q=31+28+31+day;
                break;
            case 5:
                q=31+28+31+30+day;
                break;
            case 6:
                q=31+28+31+30+31+day;
                break;
            case 7:
                q=31+28+31+30+31+30+day;
                break;
            case 8:
                q=31+28+31+30+31+30+31+day;
                break;
            case 9:
                q=31+28+31+30+31+30+31+31+day;
                break;
            case 10:
                q=31+28+31+30+31+30+31+31+30+day;
                break;
            case 11:
                q=31+28+31+30+31+30+31+31+30+31+day;
                break;
            case 12:
                q=31+28+31+0+31+30+31+31+30+31+30+day;
                break;
            }
            if (isleapyear(a.year))
            {
                q=q+1;
            }
            return q;

        }
