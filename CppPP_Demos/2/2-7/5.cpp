#include <iostream>
int main(void)
{
    using namespace std;

    double Cel_val;

    cout << "Please Enter a Celsius value: ";
    cin >> Cel_val;
    cout << Cel_val << "degree Celsius is " << Cel_val * 1.8 + 32.0 << " degree Fahrenheit.";

    return 0;
}
