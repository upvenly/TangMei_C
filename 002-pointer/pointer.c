#include <stdio.h>
 
// const int MAX = 3;
 
// int main ()
// {
//    int  var[] = {10, 100, 200};
//    int  i, *ptr;
 
//    /* 指针中的数组地址 */
//    ptr = var; 
//    for ( i = 0; i < MAX; i++)
//    {
 
//       printf("存储地址：var[%d] = %p\n", i, ptr );
//       printf("存储值：var[%d] = %d\n", i, *ptr );
 
//       /* 指向下一个位置 */
//       ptr++;
//    }
//    return 0;
// }

// #include <stdio.h>
 
// const int MAX = 3;
 
// int main ()
// {
//    int  var[] = {10, 100, 200};
//    int  i, *ptr;
//    int *p;
//    p = var; //需要有一个指针变量来存放地址
//    /* 指针中最后一个元素的地址 */
//    ptr = &var[MAX-1];

//    printf("最后一个数的地址: %p\n",ptr);
//    printf("首地址: %p\n",p);


//    for ( i = MAX; i > 0; i--)
//    {
 
//       printf("存储地址：var[%d] = %p\n", i-1, ptr );
//       printf("存储值：var[%d] = %d\n", i-1, *ptr );
 
//       /* 指向下一个位置 */
//       ptr--;
//    }
//    return 0;
// }

#include <stdio.h>
 
const int MAX = 4;
 
int a;  // definition
extern int b;  // declaration

int main ()
{
   const char *names[] = {
                   "Zara Ali",
                   "Hina Ali",
                   "Nuha Ali",
                   "Sara Ali",
   };
   int i = 0;
 
   for ( i = 0; i < MAX; i++)
   {
      printf("Value of names[%d] = %s\n", i, names[i] );
   }
   // a = 10;
   // b = 10;
   return 0;
}