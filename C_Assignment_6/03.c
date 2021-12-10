/*
    Program : Print the following pattern
    Author  :
    Date    :
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int a[100], i, j, temp, n, c;
    clrscr();
    printf("Enter number of elements in an array : ");
    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        printf("Enter the value of a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    
    printf("Ascending : 1\nDescending : 2\n");
    printf("Enter Your Choice : ");
    scanf("%d",&c);

    for(i=0;i<n;i++)
        for (j=i+1;j<n;j++)
            if (c == 1)
            {
                if (a[i] > a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
            else if (a[i] < a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }



    for(i=0;i<n;i++)
    {
        printf("a[%d] : %d\n",i,a[i]);
    }
    getch();
}

/*----------------------------------------
Output :
Enter number of elements in an array : 5
Enter the value of a[0] : 8
Enter the value of a[1] : 3
Enter the value of a[2] : 9
Enter the value of a[3] : 2
Enter the value of a[4] : 7
Ascending : 1
Descending : 2
Enter Your Choice : 2
a[0] : 9
a[1] : 8
a[2] : 7
a[3] : 3
a[4] : 2

----------------------------------------*/ 
