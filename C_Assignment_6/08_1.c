/*
    Program : Row sum and Column sum of a matrix
    Author  :
    Date    :
*/

#include <stdio.h>
#include <conio.h>
void main()
{
    int a[3][3], b[3][3], c[3][3], i, j;
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
            c[i][j] = a[i][j] + b[i][j];
    
    printf("a + b =\n");
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

b[0][0] : 10
b[0][1] : 11
b[0][2] : 12
b[1][0] : 13
b[1][1] : 14
b[1][2] : 15
b[2][0] : 16
b[2][1] : 17
b[2][2] : 18
a + b =
 11  13  15 
 17  19  21 
 23  25  27
----------------------------------------*/ 
