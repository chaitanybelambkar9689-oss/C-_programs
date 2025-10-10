#include<iostream>
using namespace std;
#pragma pack(1)
class Base
{public:
    int i,j;
    void fun()
    {
        cout<<"inside Base Fun\n";
    }
    void gun()
    {
        cout<<"inside Base gun\n";
    }
    virtual void sun()
    {
        cout<<"inside Base sun\n";
    }
    virtual void bun()
    {
        cout<<"inside Base bun\n";
    }

    

};
#pragma pack(1)     
class Derived:public Base
{
    public:
     int x;
    void gun()
    {
        cout<<"inside Derived gun\n";
    }
    void sun()
    {
        cout<<"inside Derived sun\n";
    }
    void run()
    {
        cout<<"inside Derived run\n";
    }
    void mun()
    {
        cout<<"inside Derived mun\n";
    }

};

int main()
{
    cout<<sizeof(Base)<<"\n";//16
    cout<<sizeof(Derived)<<"\n";//20
    Base *bp =new Derived();//upcasting
   /* bp->fun();//Base fun
    bp->gun();//base gun
    bp->sun();//Base sun
   // bp->run();//Error
    bp->mun();//error
    bp->bun();//Base bun*/
 
    return 0;
}