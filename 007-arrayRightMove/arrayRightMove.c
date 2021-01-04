#include <stdio.h>
#define MAXN 10

int ArrayShift( int a[], int n, int m );

int main()
{
    int a[MAXN], n, m;
    int i;

    scanf("%d %d", &n, &m);
    for ( i = 0; i < n; i++ ) scanf("%d", &a[i]);

    ArrayShift(a, n, m);

    for ( i = 0; i < n; i++ ) {
        if (i != 0) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");

    return 0;
}

/* 你的代码将被嵌在这里 */

int ArrayShift( int a[], int n, int m )
{
    int i ;
    // int b[n]={0};
    int b[n];
    m=m%n; //考虑m>n的情况

    for (i = 0; i< n ; i++)
        if (i+m<n)
            b[i+m] = a[i];
        else
            b[i+m-n]=a[i];
    
    for (i=0;i<n;i++)
        a[i]=b[i];

}
    

// YU method
// int ArrayShift( int a[], int n, int m )
// {
//     m=m%n;
//     int i ;
//     int tmp[m];
//     for (i = 0;i<m  ; i++){
//         tmp[i]=a[n-i-1];
//     }
//     for(i=n-1;i>=m;i--){
//         a[i]=a[i-m];
//     }
//     for (i = 0;i<m  ; i++){
//         a[i]=tmp[m-i-1];
//     }

// }