#include <iostream>

using namespace std;

namespace A
{
    void func()
    {
        cout<<"namespace A"<<endl;
    }
}

namespace B
{
    void func()
    {
        cout<<"namespace B"<<endl;
    }
}


void func()
{
    cout<<"namespace std"<<endl;
}

int main(int argc, char **argv)
{
    A::func();  //����namespace A��func����
    B::func();  //����namespace B��func����
    func();     //����namespace std��func����
    
    return 0;
}