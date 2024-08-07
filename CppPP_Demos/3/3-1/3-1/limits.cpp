#include <iostream>
#include <climits>

int main(void)
{
    using namespace std;
    
    cout << "char: " << sizeof(char) << " bytes" << ", min value: " << CHAR_MIN << ", max value: " << CHAR_MAX << endl;
    cout << "short: " << sizeof(short) << " bytes"<< ", min value: " << SHRT_MIN << ", max value: " << SHRT_MAX << endl;
    cout << "int: " << sizeof(int) << " bytes" << ", min value: " << INT_MIN << ", max value: " << INT_MAX << endl;
    cout << "long: " << sizeof(long) << " bytes" << ", min value: " << LONG_MIN << ", max value: " << LONG_MAX << endl;
    cout << "long long: " << sizeof(long long) << " bytes" << ", min value: " << LONG_LONG_MIN << ", max value: " << LONG_LONG_MAX << endl;

    return 0;
}
