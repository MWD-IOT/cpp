#include <iostream>

double stonetobl(double);

int main()
{
    using namespace std;

    double stone;
    cout << "Enter the weight in stone: ";
    cin >> stone;
    double pounds = stonetobl(stone);
    cout << stone << " stone = ";
    cout << pounds << " pounds." << endl;

    return 0;
}

double stonetobl(double sts)
{
    return sts * 14;
}


