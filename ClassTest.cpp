#include <iostream>
using namespace std;
class animal
{
public:
    animal(int type)
    {
        cout<<"animal "<<type<<" construct!"<<endl;
    }
};
class fish:public animal
{
public:
    fish(int type):animal(type)
    {
        cout<<"fish "<<type<<" construct!"<<endl;
    }
};
int main(int argc, char const *argv[])
{
    /* code */
    fish myfish(2);
    return 0;
}