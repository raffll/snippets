class process_1
{
public:
    template<typename T>  
    inline void fun(T t)
    {
        t(1,2);
    }
};

template<typename T>
class process_2
{
public:  
    inline void fun()
    {
        T()(1,2);
    }
};

class strategy_1
{
public:
    int operator()(int a, int b)
    {
        return a + b;
    }
};

class strategy_2
{
public:
    double operator()(double a, double b)
    {
        return a + b;
    }
};

int main()
{
    process_1 p1;
    p1.fun(strategy_1());

    process_2<strategy_2> p2;
    p2.fun();
}
