#include <iostream>

using namespace std;

void show_time(int, int);

int main(void)
{

    int hours;
    int minutes;

    cout << "Enter the number of hours: ";
    cin >> hours;
    if(hours < 0 || hours >23)
    {
        cout << "Invalid value, it must be \"0 <= hours <= 23\", please enter again.";
        return -1;
    }
    else
    {
        cout << "Enter the number of minutes: ";
        cin >> minutes;
        if(minutes < 0 || minutes >59)
        {
            cout << "Invalid value, it must be \"0 <= minutes <= 59\", please enter again.";
            return -2;
        }
    }

    show_time(hours, minutes);

    return 0;
}

void show_time(int hours, int minutes)
{
    cout << "Time:" << hours << ":" << minutes << endl;
}


