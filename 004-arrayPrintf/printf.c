#include <stdio.h>
///二维数组的输入输出

int main()
{
    int s[2][3],n,num[3];
    int i,j,w,k;
    for (i=0;i<2;i++)
    {
        scanf("%d",&num[i]);
        for(j=0;j<3;j++)
        {
            scanf("%d",&s[i][j]);
        }
    }

    for (i=0;i<2;i++){
        printf("stuid: %d\n", num[i]);
        for(j=0;j<3;j++)
        {
            printf("stuid-%d: %d\n",num[i], s[i][j]);
        }
    }
}