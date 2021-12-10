/*
    Program : 
    Author  :
    Date    :
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int a[100], i, Largest, Smallest, n;
    clrscr();
    printf("Enter number of elements in an array : ");
    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        printf("Enter the value of a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    
    Largest = a[0];
    Smallest = a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>Largest)
            Largest = a[i];
        if(a[i]<Smallest)
            Smallest = a[i];
    }


    printf("Smallest = %d\nLargest = %d\n",Smallest,Largest);
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
