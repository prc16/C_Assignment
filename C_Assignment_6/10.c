/*
    Program : Find the length of a string without using built in function(strlen())
    Author  :
    Date    :
*/
#include <stdio.h>
#include <conio.h>
void main()
{
	char str[20];
	int i;
	clrscr();

	printf("Enter a string : ");
	gets(str);

	i=0;
	while(str[i] != '\0')
		i++;

	printf("Length of %s is %d\n",str,i);
	getch();
}

/*----------------------------------------
Output :
Enter a string : String
Length of String is 6
----------------------------------------*/ 
