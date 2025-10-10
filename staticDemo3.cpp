#include<iostream>

using namespace std;

class Demo
{
    public:
    int i;
    int j;
    static int x; //size is 8bytes
    Demo()
    {
        this->i = 0;
        this->j = 0;

    }
    Demo(int A, int B)
    {
        this->i = A;
        this->j = B;

    }
    void fun() //void Fun(Demo*const this)
    {
        cout<<"inside fun\n";
        cout<<"Value of i is:"<<this->i<<"\n";
        cout<<"Value of j is:"<<this->j<<"\n";
        cout<<"Value of x is:"<<x<<"\n";
    }
    static void gun()
    {
        cout<<"inside gun\n";
        //cout<<i<<"\n";
        //cout<<j<<"\n";
        cout<<x<<"\n";


    }

};
int Demo ::x =11;
int main()
{
    Demo::gun();
    cout<<"value of x is"<<Demo::x<<"\n";//static tyamule: dila
    Demo obj(10,20);
    obj.fun();
    obj.gun();//Demo::Gun();
    cout<<"size of obj is"<<sizeof(obj)<<"\n";
    return 0;
}