/*
    Program : Sort an array in ascending or descending order (Bubble sort)
    Author  :
    Date    :
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int a[20], i, j, temp, n, choice;
    enum { Ascending = 0, Descending = 1};
    clrscr();
    printf("Enter number of elements in an array : ");
    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        printf("Enter the value of a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    
    printf("Ascending  : 0\n");
    printf("Descending : 1\n");
    printf("Enter your choice : ");
    scanf("%d",&choice);

    for (i=0;i<n;i++)
        for (j=i+1;j<n;j++)
            switch (choice)
            {
                case Ascending:
                    if (a[j] < a[i])
                    {
                        temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                    }
                    break;
                case Descending:
                    if (a[j] > a[i])
                    {
                        temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                    }
            }

    for(i=0;i<n;i++)
        printf("a[%d] : %3d\n",i,a[i]);
    
    getch();
}

/*----------------------------------------
Output :
Enter number of elements in an array : 5
Enter the value of a[0] : 44
Enter the value of a[1] : -55
Enter the value of a[2] : 56
Enter the value of a[3] : -6
Enter the value of a[4] : 69
Ascending  : 0
Descending : 1
Enter your choice : 0
a[0] : -55
a[1] :  -6
a[2] :  44
a[3] :  56
a[4] :  69
----------------------------------------*/ 