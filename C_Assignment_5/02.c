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
    printf("Enter the value of N : ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
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