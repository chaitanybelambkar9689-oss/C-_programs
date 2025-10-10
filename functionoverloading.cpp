#include<iostream>
using namespace std;

class Demo
{
    public:
    //overloading by changing number of parameter 
    //fun@2ii
   void fun(int i,int j) //fun(11,21)

    {}
    //fun@3iii
   void fun(int i,int j,int k)//fun(11,21,51)
    {}
      // overloading by changing sequence of parameters
    void gun(int i,double d)//gun(10,10.5)
    {}//gun@2id
    void gun(double d,int i)//gun(10.5,10)
    {}//gun@2di
    //overloading by changing datatype of parameters
    //sun@2cc
    void sun(float f1,float f2)//sun(10.5f,20.f)
    {}
    void sun(char ch1,char ch2)//sun('a','b')
    {}
    /*
    //we cannot overload by changing returntype
    //run@2ii
    int run(inti,intj)
    {}
    //run@2ii
    float run(inti,intj)
    {}*/
};
int main()
{
    return 0;

}