/*求两个三阶矩阵的乘积*/
#include <iostream>
using namespace std;

void matproduct(int a[][3], int b[][3], int c[][3], int n)
{
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            c[i][j] = 0;
            for(int k=0; k<n; ++k)
            c[i][j] = c[i][k] + a[i][j] * b[k][j];
        }
    }
}

int main()
{
    int a[3][3] = {{1,1,1},{2,2,2},{3,3,3}};
    int b[3][3] = {{4,4,4},{5,5,5},{6,6,6}};
    int c[3][3] = {0};
    matproduct(a, b, c, 3);
    for(int i=0; i<3; ++i)
    {
        for(int j=0; j<3; ++j)
        cout<<c[i][j]<<'\t';
        cout<<endl;
    }
    return 0;
}