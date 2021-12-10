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
        for(j=0;j<3;j++)
            printf("a[%d][%d] = %d\n",i,j,a[i][j]);

    getch();
}

/*----------------------------------------
Output :
Enter number of elements in an array : 5
Enter the value of a[0] : 4
Enter the value of a[1] : 7
Enter the value of a[2] : 23
Enter the value of a[3] : 0
Enter the value of a[4] : -7
Smallest = -7
Largest = 23
----------------------------------------*/ 
