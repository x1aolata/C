#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define max 6


int main()
{
    int i,j,temp;
    int day;
    int count=5;//当前妃子个数
    char emperorname[50];
    int choice;//皇帝的选择
    int searchindex=-1;//用来存放查找的下标
    char tempname[20];
    char names[max][20]= {"貂蝉","杨玉环","西施","翔溪","陈浩"};
    char levelnames[5][10]= {"贵人","嫔妃","贵妃","皇贵妃","皇后"};
    //用来存放每位妃子的级别
    int levels[max]= {1,2,0,0,4,-1};
    //好感度
    int loves[max]= {100,100,100,100,100,-1};

    printf("\n*************************************************************\n");
    printf("\n*************************************************************\n");
    printf("\n*************************************************************\n");
    printf("\n***********************后宫小游戏****************************\n");
    printf("\n*************************************************************\n");
    printf("\n*************************************************************\n");
    printf("\n*************************************************************\n");
    printf("\n*****************************************出品人：蒋若辉******\n");
    printf("\n*************************************************************\n");
    printf("\n*************************************************************\n");
    printf("\n*************************************************************\n");
    printf("\n*************************************************************\n");
    system("pause");
    system("cls");

    printf("请输入当前登基皇帝名号：");
    scanf("%s", emperorname);
    printf("皇帝%s驾临，有事上奏，无事退朝！\n",emperorname);


    printf("\n*************************************************************\n");
    printf("您当前妃子名单：\n");
    printf("%-12s级别\t好感度\n","姓名");
    for(i=0; i<count; i++)
    {
        printf("%-12s%s\t%d\n",names[i],levelnames[levels[i]],loves[i]);
    }
    printf("\n*************************************************************\n");
    system("pause");
    system("cls");

    for(day=1; day<=10; day++)

    {

        printf("\n*************************************************************\n");
        printf("今天是第%d天。",day);

        printf("\n*************************************************************\n");

        printf("1、皇上下旨选妃 \t\t (增加功能) \n");
        printf("2、翻牌宠幸 \t\t (修改状态功能) \n");
        printf("3、打入冷宫 \t\t (删除功能) \n");
        printf("4、单独召见爱妃去小树林做纯洁的事  \n");
        printf("陛下请选择：");
        scanf("%d",&choice);

        printf("\n*************************************************************\n");
        printf("%-12s级别\t好感度\n","姓名");
        for(i=0; i<count; i++)
        {
            printf("%-12s%s\t%d\n",names[i],levelnames[levels[i]],loves[i]);
        }
        printf("\n*************************************************************\n");

        switch(choice)
        {
        case 1:

            //printf("1、皇上下旨选妃 \t\t (增加功能) \n");
            //增加数组三个
            //增加前去判断是否可加

            if(count<max)//如果当前妃子数量小于最大值
            {
                //执行添加
                printf("请输入娘娘的名讳：");
                scanf("%s",names[count]);
                //将第count个元素的状态初始化
                levels[count]=0;
                loves[count]=100;
                count++;

            }
            else
            {
                printf("陛下，要注意龙体啊，后宫已经人满为患了！\n添加失败!\n");
            }
            break;

        case 2: //printf("2、翻牌宠幸 \t\t (修改状态功能) \n");
            //找到妃子
            //修改状态 好感度加10 级别升一级
            //修改其他妃子的状态  好感度 -10
            printf("请输入今天翻牌娘娘的名讳：");
            scanf("%s",tempname);
            //字符串的查找
            //bug 姓名不存在
            for(i=0; i<count; i++)
            {
                if(strcmp(tempname,names[i])==0)//等于某个人
                {
                    loves[i]+=10;
                    //级别不能超
                    levels[i]=levels[i]>=4?4: levels[i]+1;
                }
                else
                {
                    loves[i]-=10;
                }
            }



            break;

        case 3: //printf("3、打入冷宫 \t\t (删除功能) \n");
            //查找，后面付给前面，总数--,修改其他妃子状态

            printf("请输入打入冷宫娘娘的名讳：");
            scanf("%s",tempname);

            for(i=0; i<count; i++)
            {
                if(strcmp(tempname,names[i])==0)//等于某个人
                {
                    searchindex=i;
                    break;
                }


            }
            if(-1==searchindex)//未改变
            {
                printf("虚惊一场，无人打入冷宫！");
            }
            else
            {
                for(i=searchindex; i<count-1; i++)
                {
                    strcpy(names[i],names[i+1]);
                    loves[i]=loves[i+1];
                    levels[i]=levels[i+1];

                }
                count--;


            }

            break;

        case 4: //printf("4、单独召见爱妃去小树林做纯洁的事  \n");
            //查找，好感度+10
            printf("请输入去小树林娘娘的名讳：");
            scanf("%s",tempname);
            for(i=0; i<count; i++)
            {
                if(strcmp(tempname,names[i])==0)//等于某个人
                {
                    loves[i]+=10;

                }

            }


        default:
        {
            printf("君无戏言，陛下请再次确认！");
            day-=1;
            continue;
        }



        break;
        }




    }


//打印所以妃子状态以级别进行排序
    for(i=0; i<count-1; i++)
    {
        for(j=0; j<count-1; j++)
        {

            if(levels[j]<levels[j+1])
            {
                temp=levels[j];
                levels[j]=levels[j+1];
                levels[j+1]=temp;

                temp=loves[j];
                loves[j]=loves[j+1];
                loves[j+1]=temp;

                strcpy(tempname,names[j]);
                strcpy(names[j],names[j+1]);
                strcpy(names[j+1],tempname);

            }


        }
    }
    printf("\n*************************************************************\n");
    printf("%-12s级别\t好感度\n","姓名");
    for(i=0; i<count; i++)
    {
        printf("%-12s%s\t%d\n",names[i],levelnames[levels[i]],loves[i]);
    }
    printf("\n*************************************************************\n");





    return 0;
}

