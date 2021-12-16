/*
	Program : compare two strings without using built in function(strcmp())
	Author  :
	Date    :
*/
#include <stdio.h>
#include <conio.h>
void main()
{
	char string1[20],string2[20];
	int length1,length2;
	clrscr();

	printf("Enter string 1 : ");
	gets(string1);

	printf("Enter string 2 : ");
	gets(string2);

	length1=0;
	while(string1[length1] != '\0')
		length1++;

	length2=0;
	while(string2[length2] != '\0')
		length2++;

	if(length1 == length2)
		printf("\"%s\" and \"%s\" are same length",string1,string2);
	else if(length1 > length2)
		printf("\"%s\" is longer than \"%s\"",string1,string2);
	else
		printf("\"%s\" is shorter than \"%s\"",string1,string2);

	getch();
}

/*----------------------------------------
Enter string 1 : A string   
Enter string 2 : B string
"A string" and "B string" are same length
----------------------------------------*/ 
