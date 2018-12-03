#include <iostream>
#include <vector>
using namespace std;

const int N = 17;

//打印N只猴子的状态（“1”表示在圈内，“0”表示不在圈内）
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
    //n记录还有多少只猴子在圈内
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
    //最后一只猴子下标为1
    for (int i=0;i<N;++i)
    {
        if (1 == v[i])
            return i+1;
    }
}

int main()
{
    vector<int> v(N,1);
    cout<<"猴大王是第"<<monkeyKing(v)<<"只."<<endl;
    return 0;
}
---------------------
作者：二叉树
来源：CSDN
原文：https://blog.csdn.net/u011954296/article/details/51351982
版权声明：本文为博主原创文章，转载请附上博文链接！
