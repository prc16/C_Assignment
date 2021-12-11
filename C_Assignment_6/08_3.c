/*
    Program : Transpose of a matrix
    Author  :
    Date    :
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int a[3][3], aT[3][3], i, j, k;
    clrscr();

    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {
            printf("a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }

    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {
            aT[i][j] = a[j][i];
        }
    
    printf("aT =\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%3d ",aT[i][j]);
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
aT =
  1   4   7 
  2   5   8 
  3   6   9 
----------------------------------------*/ 
