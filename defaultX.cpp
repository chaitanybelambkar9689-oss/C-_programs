#include<iostream>

using namespace std;

float Area(float rad,float PI=3.14f)
{
    float fAns =0.0f;
    fAns = PI*rad*rad;
    return fAns;

}
int main()
{
    float fRet=0.0f;
    fRet = Area(10.5f);
    cout<<"Area of circle is:"<<fRet<<"\n";
    fRet = Area(10.5f,9.10f);
    cout<<"Area of circle is:"<<fRet<<"\n";
    return 0;
    
}