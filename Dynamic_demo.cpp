#include<iostream>
using namespace std;

int main()
{
    int length =0;
    int *Arr =NULL;
    cout<<"enter the number of elements:\n";
    cin>>length;

    Arr=new int[length];
    if(Arr== NULL)
    {
        cout<<"unable to allocate the memory\n";
    }
    //step1:Allocate the memory
    else 
    {
        cout<<"sucessfuly allocate the memory\n";

    }
    //use the memory
    delete  [] Arr;
    //deallocate the memory
}