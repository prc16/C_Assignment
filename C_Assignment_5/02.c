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
    for(i=1;i<=n;i++)
    {
        for(j=n-i+1;j>=1;j--)
            printf("*");
        printf("\n");
    }
    getch();
}

/*----------------------------------------
Output :
Enter the value of N : 5
*****
****
***
**
*
----------------------------------------*/