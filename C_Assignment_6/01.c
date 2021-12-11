/*
    Program : Initialize and print an array of 5 elements
    Author  :
    Date    :
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int a[5],i;
    clrscr();
    
    for(i=0;i<5;i++)
    {
        printf("Enter the value of a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("a[%d] = %d\n",i,a[i]);
    }
    getch();
}

/*----------------------------------------
Output :
Enter the value of a[0] : 5
Enter the value of a[1] : 6
Enter the value of a[2] : 7
Enter the value of a[3] : 8
Enter the value of a[4] : 9
a[0] = 5
a[1] = 6
a[2] = 7
a[3] = 8
a[4] = 9
----------------------------------------*/ 
