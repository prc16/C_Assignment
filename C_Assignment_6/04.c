/*
    Program : Print the following pattern
    Author  :
    Date    :
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int a[10],flag=0, search, i;
    clrscr();
    
    for(i=0;i<10;i++)
    {
        printf("Enter the value of a[%d] : ",i);
        scanf("%d",&a[i]);
    }

    printf("Search for : ");
    scanf("%d",&n);

    for(i=0;i<10;i++)
    {
        if(a[i]==n)
        {
            flag = 1;
            printf("Element found at a[%d] = %d.",i,a[i]);
        }
    }
    if(flag==0)
    printf("Element not found.");

    avg=sum/5;
    printf("sum = %.2f avg = %.2f\n",sum,avg);
    getch();
}

/*----------------------------------------
Output :
Enter the value of a[0] : 1
Enter the value of a[1] : 2
Enter the value of a[2] : 3
Enter the value of a[3] : 4
Enter the value of a[4] : 5
sum = 15.00 avg = 3.00
----------------------------------------*/ 
