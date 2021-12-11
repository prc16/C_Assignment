/*
    Program : Print the following pattern
    Author  :
    Date    :
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int n,i,j;
    clrscr();
    printf("Enter the value of N : ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }
    for(i=2;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }
    getch();
}

/*----------------------------------------
Output :
Enter the value of N : 4
****
***
**
*
**
***
****
----------------------------------------*/