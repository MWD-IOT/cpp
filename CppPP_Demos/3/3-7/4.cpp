#include <iostream>

int main(void)
{
    using namespace std;

    const int min2sec = 60;
    const int hour2min = 60;
    const int day2hour = 24;
    unsigned long seconds = 0;

    cout << "Enter a time(seconds): ";
    cin >> seconds;
    cout << seconds << " seconds = "
         << seconds / min2sec / hour2min / day2hour << " days, "
         << seconds / min2sec / hour2min % day2hour << " hours, " 
         << seconds / min2sec % hour2min << " minutes, "
         << seconds % min2sec << " seconds" << endl; 

    return 0;
}