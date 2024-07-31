#include <iostream>

double Light_Year2Astro_Units(double);

int main(void)
{
    using namespace std;

    double light_years;
    double astro_units;

    cout << "Enter the number of the light years: ";
    cin >> light_years;
    astro_units = Light_Year2Astro_Units(light_years);
    cout << light_years << " light years = " << astro_units << " astronomical units.";
}

double Light_Year2Astro_Units(double light_years)
{
    return light_years * 63240;
}
