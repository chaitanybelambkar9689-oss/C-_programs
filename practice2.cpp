class Demo
{
    public:
    void fun(int i)
    {
        cout<<"first defination";

    }
    void fun(int i,int j)
    {
        cout<<"second defination";
    }
};

int main()
{
    Demo obj();
    obj.fun(10);
    obj.fun(10,20);
    return 0;
}g