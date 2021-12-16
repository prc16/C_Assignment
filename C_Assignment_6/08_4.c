/*
	Program : Norm of a matrix
	Author  :
	Date    :
*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
	int a[3][3], i, j, sum_of_sqare = 0;
	float norm;
	clrscr();

	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{
			printf("a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			sum_of_sqare += a[j][i] * a[j][i];

	norm = sqrt(sum_of_sqare);
	printf("Norm of matrix a = %.2f\n",norm);

	getch();
}

/*----------------------------------------
Output :
a[0][0] : 2
a[0][1] : 2
a[0][2] : 2
a[1][0] : 2
a[1][1] : 2
a[1][2] : 2
a[2][0] : 2
a[2][1] : 2
a[2][2] : 2
Norm of matrix a = 6.00
----------------------------------------*/ 
