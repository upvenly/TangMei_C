#include <stdio.h>

#define ROW 2
#define COL 3

//两个二维矩阵乘
void MultiplayMatrix(int a[ROW][COL], int b[COL][ROW], int c[ROW][ROW])
{
    int i,j,k;
    for(i=0;i<ROW;i++)
        {
            for(j=0;j<ROW;j++)
            {
                c[i][j]=0;
                for(k=0;k<COL;k++)
                {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
                }

            }
        }


}

int main()
{
    int a[ROW][COL] = {1,2,1,3,1,1}, b[COL][ROW]={1,1,3,1,1,1}, c[ROW][ROW];
    //int a[ROW][COL], b[COL][ROW], c[ROW][ROW];

    // a[ROW][COL] = {1,1,1,1,1,1};
    // b[COL][ROW] = {1,1,1,1,1,1};
    

    int i ,j;

    MultiplayMatrix(a,b,c);

    for(i=0;i<ROW;i++)
    {
        for(j=0;j<ROW;j++)
            printf("%6d",c[i][j]);

    }
    printf("\n");
    

}