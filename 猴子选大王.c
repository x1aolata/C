#include <iostream>
#include <vector>
using namespace std;

const int N = 17;

//��ӡNֻ���ӵ�״̬����1����ʾ��Ȧ�ڣ���0����ʾ����Ȧ�ڣ�
void printVec(const vector<int> &v)
{
    for (vector<int>::const_iterator it = v.begin();it != v.end();++it)
    {
        cout<<*it<<' ';
    }
    cout<<endl;
}

int monkeyKing(vector<int> v)
{
    //n��¼���ж���ֻ������Ȧ��
    int n = N;
    int k = 0;
    int i;
    while (n > 1)
    {
        for (i=0;i<N;++i)
        {
            k += v[i];
            if (k == 3)
            {
                v[i] = 0;
                printVec(v);
                k = 0;
                --n;
            }
        }
    }
    //���һֻ�����±�Ϊ1
    for (int i=0;i<N;++i)
    {
        if (1 == v[i])
            return i+1;
    }
}

int main()
{
    vector<int> v(N,1);
    cout<<"������ǵ�"<<monkeyKing(v)<<"ֻ."<<endl;
    return 0;
}
---------------------
���ߣ�������
��Դ��CSDN
ԭ�ģ�https://blog.csdn.net/u011954296/article/details/51351982
��Ȩ����������Ϊ����ԭ�����£�ת���븽�ϲ������ӣ�
