/*
    Program : Print the following pattern
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
            printf("%d",a[i][j]);
        printf("\n");
    }
    getch();
}

/*----------------------------------------
Output :
a[0][0] = 1
a[0][1] = 2
a[0][2] = 3
a[1][0] = 4
a[1][1] = 5
a[1][2] = 6
a[2][0] = 7
a[2][1] = 8
a[2][2] = 9
----------------------------------------*/ 
