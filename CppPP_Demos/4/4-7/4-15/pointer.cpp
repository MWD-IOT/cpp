#include <iostream>

int main(void)
{
    using namespace std;

    int updates = 6;
    int *p_updates;
    p_updates = &updates;
    cout << "Values: updates = " << updates;
    cout << ", *p_updates = " << *p_updates << endl;

    cout << "Address: &updates = " << &updates;
    cout << ", p_updates = " << p_updates << endl;
    cout << "Now updates =  " << updates << endl;

    return 0;
}
