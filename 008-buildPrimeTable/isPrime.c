#include <stdio.h>

/*初始化全为1的素数表,【从2开始】遍历所有待计算的数据，,把每个数的2/3/4/...的倍数置0，在非0的情况下继续置0 ，直到遍历所有数据*/

int main()
{
    const int num = 10;
    int i = 0;
    int prime[num];
    int x;
    for (i = 0; i < num; i++)
    {
        prime[i] = 1;
    }

    for (x = 2; x < num; x++)
        if (prime[x])
        {
            for (i = 2; x * i < num; i++)
                prime[i * x] = 0;
        }

    for (i = 2; i < num; i++)
    {
        if (prime[i])
            printf("%d\n", i);
    }
    // if(isPrime2())
}