#include<iostream>
using namespace std;
class Demo
{
    public:
    void Display()
    {
    cout<<"inside void display";
    }

};

int main()
{
 Demo dobj;
 cout<<sizeof(dobj);//1byte
 return 0;
}