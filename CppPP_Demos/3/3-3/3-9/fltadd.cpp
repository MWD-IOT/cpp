#include <iostream>

int main(void)
{
    using namespace std;

    float a = 2.34e22;
    float b = a + 1;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "b - a = " << b - a << endl;

    return 0;
}
