#include <iostream>

int main(void)
{
    using namespace std;

    const int convert_feet = 12;
    const float convert_cm = 2.54;
    int height_inch = 0;

    cout << "Enter your height with inch:____\b\b\b\b";
    cin >> height_inch;
    cout << "Your height = " << height_inch / convert_feet << " feet " 
         << height_inch % convert_feet << " inch, "
         << height_inch * convert_cm << " cm." << endl;

    return 0;
}