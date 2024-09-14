#include <iostream>

int main(void)
{
    using namespace std;

    int nights = 1001;
    int *pt = new int;
    *pt = 1001;

    cout << "night value = ";
    cout << nights << ": location " << &nights << endl;
    cout << "int ";
    cout << "value = " << *pt << ": location = " << pt << endl;
    double *pd = new double;
    *pd = 10000001.0;

    cout << "double ";
    cout << "value = " << *pd << ": location = " << pd << endl;
    cout << "size of pt = " << sizeof(pt);
    cout << ": sizeof *pt = " << sizeof(*pt) << endl;
    cout << "size of pd = " << sizeof(pd);
    cout << ": sizeof *pd = " << sizeof(*pd) << endl;

    return 0;
}