#include<iostream>
using namespace std;
class base
{
    public:
    void show()
    {
        cout<<"early binding "<<endl;
        cout<<"in base"<<endl;
    }
};
class derived:public base
{
    public:
    void show()
    {
        cout<<"in derived"<<endl;
    }
};
int main()
{
    base *bp=new derived;
    bp->show();
    return 0;
}

