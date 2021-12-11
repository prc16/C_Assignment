/*
    Program : 
    Author  :
    Date    :
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int a[3][3], i, j,rSum[3]={0,0,0},cSum[3]={0,0,0};
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
            rSum[i] += a[i][j];
            cSum[j] += a[i][j];
        }


    for(i=0;i<3;i++)
        printf("The sum of elements in Row %d = %d \n",i,rSum[i]);

    for(i=0;i<3;i++)
        printf("The sum of elements in Column %d = %d \n",i,cSum[i]);
    
    getch();
}

/*----------------------------------------
Output :
a[0][0] : 1
a[0][1] : 1
a[0][2] : 1
a[1][0] : 2
a[1][1] : 2
a[1][2] : 2
a[2][0] : 3
a[2][1] : 3
a[2][2] : 3
The sum of elements in Row 0 = 3 
The sum of elements in Row 1 = 6 
The sum of elements in Row 2 = 9 
The sum of elements in Column 0 = 6 
The sum of elements in Column 1 = 6 
The sum of elements in Column 2 = 6
----------------------------------------*/ 
