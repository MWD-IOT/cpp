
/*交换x和y的值*/
#include <iostream>
using namespace std;

int main()
{
    int x, y, temp;
    cout<<"请输入x和y的值，用空格隔开：";
    cin>>x>>y;
    temp  = x;
    x = y;
    y = temp;
    cout<<"x = "<<x<<"y = "<<y<<endl;
    return 0;
}