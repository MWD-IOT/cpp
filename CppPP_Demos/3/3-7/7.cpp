#include <iostream>

int main(void)
{
    using namespace std;

    float nLgasline100km = 0;

    cout << "Enter the oil consumption(L/100 km): ";
    cin >> nLgasline100km;
    cout << nLgasline100km << " L/100 km = " << 62.14 / (double(nLgasline100km) / 3.875) << " mpg" << endl;

    return 0; 
}
