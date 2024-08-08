#include <iostream>

int main(void)
{
    using namespace std;

    unsigned int mileage_km = 0;
    unsigned int gasline_L = 0;

    cout << "Enter the mileage(km): ";
    cin >> mileage_km;
    cout << "Enter the gasline(L): ";
    cin >> gasline_L;
    cout << "1 L gasline can run " << double(mileage_km) / double(gasline_L) << " km" << endl;
    cout << "The oil consumption is " << double(gasline_L) / double(mileage_km) * 100.0 << " L/100 km" << endl;

    return 0; 
}
