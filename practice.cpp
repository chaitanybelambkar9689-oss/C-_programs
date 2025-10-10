// // class Base
// // {
// //     public:
// //     int i;
// //     int j;
// //     void fun()
// //     {

// //     }
// //     void gun()
// //     {

// //     }
// //     virtual void sun()
// //     {

// //     }
// // };
// // class Derived: public Base
// // {
// //     public: int x;
// //     void fun()
// //     {

// //     }
// //     void sun()
// //     {}


// // };
// // int main()
// // {
// //     Base *bp1 = new Base();
// //     Derived *dp1 =new Derived();

// //     Base *Bp2 = new Derived();
// //     Derived *dp2 =new Base();

// //     Bp2->fun();
// //     Bp2->sun();
// //     Bp2->gun();



// // }
// class Base 
// {
//     public :
//     int i,j;
//     int Addition(int a,int b)
//     {
//         return a+b;
//     }
//     virtual int Substraction(int a, int b)=0;

// };
// class Derived:public Base
// {
//     public: int x;
//     int Substraction(int a,int b)
//     {
//         return a-b;
//     }
//     int Multiplication(int a,int b)
//     {
//         return a*b;
//     }


// };
// int main()
// {
//     Base*bp1 = new Derived();
//     int iRet = 0;
//     iRet = bp1->Addition(11,21);
//     iRet =bp1 ->Substraction(12,10);

// }