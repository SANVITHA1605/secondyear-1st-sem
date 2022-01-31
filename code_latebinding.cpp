#include <iostream>
using namespace std;
class base
{
    public:
    virtual void show()
    {
        cout<<"in base"<<endl;
    }
};
class derived:public base
{
    public:
    void show()
    {
        cout<<"in derived or run time polimorphism"<<endl;
    }
};
int main()
{
    base *bp=new derived;
    bp->show();
}



