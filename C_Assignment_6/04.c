/*
    Program : 
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
    scanf("%d",&search);

    for(i=0;i<10;i++)
    {
        if(a[i]==search)
        {
            flag = 1;
            printf("Element found at a[%d] = %d.\n",i,a[i]);
        }
    }
    if(flag==0)
    printf("Element not found.\n");
    getch();
}

/*----------------------------------------
Output :
Enter the value of a[0] : 1
Enter the value of a[1] : 2
Enter the value of a[2] : 3
Enter the value of a[3] : 44
Enter the value of a[4] : 44
Enter the value of a[5] : 5
Enter the value of a[6] : 5
Enter the value of a[7] : 44
Enter the value of a[8] : 5
Enter the value of a[9] : 6
Search for : 44
Element found at a[3] = 44.
Element found at a[4] = 44.
Element found at a[7] = 44.
----------------------------------------*/ 
