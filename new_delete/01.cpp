#include <iostream>

using namespace std;

class Test
{
    public:
        Test()
        {
            cout<<"调用了构造函数"<<endl;
        }
        ~Test()
        {
            cout<<"调用了析构函数"<<endl;
        }
};

int main(int argc, char **argv)
{
    char *p = NULL;
    if ( NULL == (p = new char ) )
    {
        cout<<"Memory allocation failed!"<<endl;
        exit(1);
    }
    char *arr = NULL;
    arr = new char[10];
    Test *t1 = new Test;

    *p = '1';

    cout<<"p size:"<<sizeof(p)<<endl;
    cout<<"arr size:"<<sizeof(arr)<<endl;
    cout<<"*p:"<<*p<<endl;
    for(int i=0; i<10; i++)
    {
        cout<<"arr[%d]:"<<i<<arr[i]<<endl;
    }

    delete p;
    delete arr;
    delete t1;

    return 0;
}


