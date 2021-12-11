/*
    Program : Initialize and print a 3x3 matrix
    Author  :
    Date    :
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int a[3][3], i, j;
    clrscr();

    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            a[i][j] = j+1+i*3;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    getch();
}

/*----------------------------------------
Output :
1 2 3 
4 5 6 
7 8 9
----------------------------------------*/ 
