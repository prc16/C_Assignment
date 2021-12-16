/*
	Program : copy a string without using built in function(strcpy())
	Author  :
	Date    :
*/
#include <stdio.h>
#include <conio.h>
void main()
{
	char str1[20],str2[20];
	int i;
	clrscr();

	printf("Enter a string : ");
	gets(str1);

	i=0;
	while(str1[i] != '\0')
	{
		str2[i] = str1[i];
		i++;
	}
	printf("str1 = %s\n",str1);
	printf("str2 = %s\n",str2);

	getch();
}

/*----------------------------------------
Enter a string : Example string
str1 = Example string
str2 = Example string
----------------------------------------*/ 
