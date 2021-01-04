#include <stdio.h>

#include <stdio.h>
#include <math.h>

int isPrime( int n);
int PrimeSum( int m, int n );



/*给定范围，求素数的和*/

int main()
{
    int m, n, p;

    scanf("%d %d", &m, &n); //输入求素数的范围
    printf("Sum of ( ");
    for( p=m; p<=n; p++ ) {
        if( isPrime(p) != 0 )
            printf("%d ", p);
    }
    printf(") = %d\n", PrimeSum(m, n));
}


int isPrime(int n)
{

    int i = 0;
    int ret = 1;

    if (n <= 1 || (n%2 == 0 && n!=2))
    {
        ret = 0;
    }
    else if (n > 2)
    {
    
    /*method1*/
    // for (i = 2; i < n; i++) //i:2到n-1
    
    /*method2*/
        for (i = 3; i <= sqrt(n); i = i+2) //i:3-sqrt(n)
        {
            if (n % i == 0)
            {
                // printf("n: %d",n);s
                ret = 0;
                // return ret;
                break;
            }
        }
    }



    return ret;
}

int PrimeSum(int m, int n)
{
    // int ret[m][n] = 1;
    int sum = 0;
    int i = 0;

    for (i = m; i <= n; i++)
    {
        // printf("isPrime: %d\n",isPrime(i));
        if (isPrime(i))
        {
            sum = sum + i;
            // printf("%d\n", sum);
        }
    }
    return sum;
}


// int main()
// {
//     int n;
//     int ret;
//     //int *p=&n;
//     //printf("%p %d\n",p,n);
//     scanf("%d", &n);
//     // scanf("%d\n", &n);/*遇到回车才会读入，所以要输入两次字符*/
//     printf("the input is: %d\n", n);
//     ret = isPrime(n);
//     printf("ret:%d\n", ret);
// }

