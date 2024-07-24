#include <iostream>
#include <vector>

using namespace std;



int main(int argc, char **argv)
{
    vector<int> vec;
    int i;

    cout<<"vector size:"<<vec.size()<<endl;
    for(i=0; i<5; i++)
    {
        vec.push_back(i);
    }

    cout<<"extened vector size:"<<vec.size()<<endl;
    for(i=0; i<5; i++)
    {
        cout<<"vector["<<i<<"]:"<<vec[i]<<endl;
    }

    vector<int>::iterator v = vec.begin();
    while(v != vec.end())
    {
        cout<<"vector v = "<<*v<<endl;
        v++;
    }

    return 0;
}

