//boGe

template <typename T>
T add(T a, T b)
{
    return a + b;
}

//模板函数
add<float>(a, b);
add<int>(a, b)

    //模板类
    template <class T>
    class TCls
{
    // protected:
public
    T a;
};

class A
{
    int a;

    void func()
    {
        a++;
    }

    void ff();
};

void A::ff(){

}; //外面访问

void f()
{
    A a;
    a.a; // 从外面访问，所以需要定义为public
}

TCls<int> b;
TCls<A> c;

b.a;

float *p, d; //float* p, d;只定义了一个指针
float a;
p = &a;

void fun(float *p, float d)
{
}

//引用；
float a;
float &b = a;

float fu(float &b)
{
    b = 1.f;
    return b;
}
a = 2;
b = fu(a);
