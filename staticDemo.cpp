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
    void fun() //void Fun(Demo*constthis)
    {
        cout<<"inside fun\n";

    }
    static void gun() //static void gun
    {
        cout<<"inside gun\n";

    }

};
int Demo ::x =11;
int main()
{
    Demo::gun();
    cout<<"value of x is"<<Demo::x<<"\n";//static tyamule: dila
    return 0;
}