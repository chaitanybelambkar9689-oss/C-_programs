#include<iostream>

using namespace std;
#pragma pack(1)
class Base
{public:
    int i,j;
    int Addition(int a,int b)//concrete
    {
        return a+b;
    }
    virtual int Substraction(int a,int b)=0;//abstract

   
    

};
#pragma pack(1)
class Derived:public Base //Error
{
    public:
     int x;

    

};

int main()
{
    
    Base *bp =new Derived();//upcasting
   
 
    return 0;
}