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
    int count=5;//��ǰ���Ӹ���
    char emperorname[50];
    int choice;//�ʵ۵�ѡ��
    int searchindex=-1;//������Ų��ҵ��±�
    char tempname[20];
    char names[max][20]= {"����","����","��ʩ","��Ϫ","�º�"};
    char levelnames[5][10]= {"����","����","����","�ʹ���","�ʺ�"};
    //�������ÿλ���ӵļ���
    int levels[max]= {1,2,0,0,4,-1};
    //�øж�
    int loves[max]= {100,100,100,100,100,-1};

    printf("\n*************************************************************\n");
    printf("\n*************************************************************\n");
    printf("\n*************************************************************\n");
    printf("\n***********************��С��Ϸ****************************\n");
    printf("\n*************************************************************\n");
    printf("\n*************************************************************\n");
    printf("\n*************************************************************\n");
    printf("\n*****************************************��Ʒ�ˣ�������******\n");
    printf("\n*************************************************************\n");
    printf("\n*************************************************************\n");
    printf("\n*************************************************************\n");
    printf("\n*************************************************************\n");
    system("pause");
    system("cls");

    printf("�����뵱ǰ�ǻ��ʵ����ţ�");
    scanf("%s", emperorname);
    printf("�ʵ�%s���٣��������࣬�����˳���\n",emperorname);


    printf("\n*************************************************************\n");
    printf("����ǰ����������\n");
    printf("%-12s����\t�øж�\n","����");
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
        printf("�����ǵ�%d�졣",day);

        printf("\n*************************************************************\n");

        printf("1��������ּѡ�� \t\t (���ӹ���) \n");
        printf("2�����Ƴ��� \t\t (�޸�״̬����) \n");
        printf("3�������乬 \t\t (ɾ������) \n");
        printf("4�������ټ�����ȥС�������������  \n");
        printf("������ѡ��");
        scanf("%d",&choice);

        printf("\n*************************************************************\n");
        printf("%-12s����\t�øж�\n","����");
        for(i=0; i<count; i++)
        {
            printf("%-12s%s\t%d\n",names[i],levelnames[levels[i]],loves[i]);
        }
        printf("\n*************************************************************\n");

        switch(choice)
        {
        case 1:

            //printf("1��������ּѡ�� \t\t (���ӹ���) \n");
            //������������
            //����ǰȥ�ж��Ƿ�ɼ�

            if(count<max)//�����ǰ��������С�����ֵ
            {
                //ִ�����
                printf("��������������䣺");
                scanf("%s",names[count]);
                //����count��Ԫ�ص�״̬��ʼ��
                levels[count]=0;
                loves[count]=100;
                count++;

            }
            else
            {
                printf("���£�Ҫע�����尡�����Ѿ�����Ϊ���ˣ�\n���ʧ��!\n");
            }
            break;

        case 2: //printf("2�����Ƴ��� \t\t (�޸�״̬����) \n");
            //�ҵ�����
            //�޸�״̬ �øжȼ�10 ������һ��
            //�޸��������ӵ�״̬  �øж� -10
            printf("��������췭����������䣺");
            scanf("%s",tempname);
            //�ַ����Ĳ���
            //bug ����������
            for(i=0; i<count; i++)
            {
                if(strcmp(tempname,names[i])==0)//����ĳ����
                {
                    loves[i]+=10;
                    //�����ܳ�
                    levels[i]=levels[i]>=4?4: levels[i]+1;
                }
                else
                {
                    loves[i]-=10;
                }
            }



            break;

        case 3: //printf("3�������乬 \t\t (ɾ������) \n");
            //���ң����渶��ǰ�棬����--,�޸���������״̬

            printf("����������乬��������䣺");
            scanf("%s",tempname);

            for(i=0; i<count; i++)
            {
                if(strcmp(tempname,names[i])==0)//����ĳ����
                {
                    searchindex=i;
                    break;
                }


            }
            if(-1==searchindex)//δ�ı�
            {
                printf("�龪һ�������˴����乬��");
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

        case 4: //printf("4�������ټ�����ȥС�������������  \n");
            //���ң��øж�+10
            printf("������ȥС������������䣺");
            scanf("%s",tempname);
            for(i=0; i<count; i++)
            {
                if(strcmp(tempname,names[i])==0)//����ĳ����
                {
                    loves[i]+=10;

                }

            }


        default:
        {
            printf("����Ϸ�ԣ��������ٴ�ȷ�ϣ�");
            day-=1;
            continue;
        }



        break;
        }




    }


//��ӡ��������״̬�Լ����������
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
    printf("%-12s����\t�øж�\n","����");
    for(i=0; i<count; i++)
    {
        printf("%-12s%s\t%d\n",names[i],levelnames[levels[i]],loves[i]);
    }
    printf("\n*************************************************************\n");





    return 0;
}

