/*
    Program : Multiplication of two 3x3 matrices
    Author  :
    Date    :
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int a[3][3], b[3][3], c[3][3], i, j, k;
    clrscr();

    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {
            printf("a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
        
    printf("\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {
            printf("b[%d][%d] : ",i,j);
            scanf("%d",&b[i][j]);
        }

    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {
            c[i][j] = 0;
            for(k=0;k<3;k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    
    printf("a x b =\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%3d ",c[i][j]);
        printf("\n");
    }
    
    getch();
}

/*----------------------------------------
Output :
a[0][0] : 1
a[0][1] : 2
a[0][2] : 3
a[1][0] : 4
a[1][1] : 5
a[1][2] : 6
a[2][0] : 7
a[2][1] : 8
a[2][2] : 9

b[0][0] : 2
b[0][1] : 0
b[0][2] : 0
b[1][0] : 0
b[1][1] : 2
b[1][2] : 0
b[2][0] : 0
b[2][1] : 0
b[2][2] : 2
a x b =
  2   4   6 
  8  10  12 
 14  16  18
----------------------------------------*/ 
