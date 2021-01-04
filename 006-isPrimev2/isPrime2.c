#include <stdio.h>


/*判断是否能被已知的且小于其本身的素数整除，能整除的说明就不是素数*/

int isPrime2(int n, int knowPrime[], int numOfPrimes)
{
    int ret = 1;
    int i = 0;

    for (i = 0; i < numOfPrimes; i++)
        if(n % knowPrime[i] == 0) //因式分解的概念，任意数可以分解成若干个素数相乘,能被小于自身到素数整除，则是非素数
        {
            ret = 0;
        }
    return ret;
}


int main()
{
    int m,n;
    const int num = 10;
    int prime[num]={2};//2是素数，先给进来，然后从3开始遍历
    int count = 1;
    int i = 3;
    // printf("%d",prime[1]);
    // for(i=3;i<num;i++)
    while(count<10)
    {
        if(isPrime2(i,prime,count)==1) 
        {
            prime[count++] = i;
        } 
        i++;     
    }
    for(i=0;i<num;i++)
    {
        printf("%d\n",prime[i]);
    }
    // if(isPrime2())

}