#include<iostream>
using namespace std;
/// dont remove error
 
class Base//12
{
 public:
  int i;
 private:
  int j;
 protected:
  int k;
 public:
  Base()
  {
    i =10;j=20;k=30;


  } 
  void Fun()
      {
        cout<<i<<"\n";//Allowed
        cout<<j<<"\n";//Allowed
        cout<<k<<"\n";//Allowed

      }
     

};


class Derived: public Base
{
    public:
      void Display()
      {
        cout<<i<<"\n";//Allowed
        cout<<j<<"\n";//Error
        cout<<k<<"\n";//Allowed

      }
   

};
int main()
{
    Base bobj;
    Derived dobj;

    cout<<bobj.i<<"\n";//Allowed
    cout<<bobj.j<<"\n";//error
    cout<<dobj.k<<"\n";//error

    cout<<dobj.i<<"\n";//Allowed
    cout<<dobj.j<<"\n";//error
    cout<<dobj.k<<"\n";//error

    dobj.Fun();//Allowed
    dobj.Display();//Allowed


  

    return 0;
}