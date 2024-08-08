#include <iostream>

int main(void)
{
    using namespace std;

    unsigned long long world_population = 0;
    unsigned long long China_population = 0;

    cout << "Enter the world's population: ";
    cin >> world_population;
    cout << "Enter the China's population: ";
    cin >> China_population;
    cout << "The population of China is " << double(China_population) / double(world_population) * 100.0 << "%" << endl;

    return 0; 
}
