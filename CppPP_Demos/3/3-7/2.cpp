#include <iostream>

int main(void)
{
    using namespace std;

    int height_feet = 0;
    int height_inch = 0;
    int weight_pounds = 0;
    float BMI = 0.0;

    const int feet2inch = 12;
    const float inch2meter = 0.0254;
    const float pounds2kg = 1 / 2.2;

    cout << "Enter your height(feet): ";
    cin >> height_feet;
    cout << "Enter your height(inches): ";
    cin >> height_inch ;
    cout << "Enter your weight(pounds): ";
    cin >> weight_pounds;
    BMI = (weight_pounds * pounds2kg) / ((height_feet * feet2inch + height_inch) * inch2meter);
    cout << "Your BMI = " << BMI << endl;
    
    return 0;
}