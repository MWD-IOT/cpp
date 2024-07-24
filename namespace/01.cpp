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
    A::func();  //调用namespace A的func函数
    B::func();  //调用namespace B的func函数
    func();     //调用namespace std的func函数
    
    return 0;
}