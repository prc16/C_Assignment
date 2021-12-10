/*
    Program : Print the following pattern
    Author  :
    Date    :
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    float a[5],sum=0, avg;
    int i;
    clrscr();
    
    for(i=0;i<5;i++)
    {
        printf("Enter the value of a[%d] : ",i);
        scanf("%f",&a[i]);
    }

    for(i=0;i<5;i++)
    {
        sum += a[i];
    }
    avg=sum/5;
    printf("sum = %.2f\n avg = %.2f\n",sum,avg);
    getch();
}

/*----------------------------------------
Output :
Enter the value of a[0] : 1
Enter the value of a[1] : 2
Enter the value of a[2] : 3
Enter the value of a[3] : 4
Enter the value of a[4] : 5
sum = 15.00
avg = 3.00
----------------------------------------*/ 
