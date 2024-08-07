#include <iostream>

int main(void)
{
    using namespace std;

    const float degrees2minutes = 60.0;
    const float degrees2seconds = 60.0 * degrees2minutes;

    int degrees = 0;
    int minutes = 0;
    int seconds = 0;

    cout << "Enter a latiude in degree, minutes and seconds: " << endl;
    cout << "First, enter the degrees: ";
    cin >> degrees; 
    cout << "Next, enter the minutes: ";
    cin >> minutes;
    cout << "Finally, enter the seconds: ";
    cin >> seconds;
    
    cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = "
         << degrees + minutes / degrees2minutes + seconds / degrees2seconds  << " degrees."; 

    
    return 0;
}