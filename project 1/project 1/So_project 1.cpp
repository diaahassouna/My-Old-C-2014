/* this program makes you put a number and it gets the character which represents it */
#include <stdio.h>
#include <stdlib.h>
void main()
{
	int a;
	printf("Insert any number to get the character: ");
	scanf("%d",&a); /* %d means that the 1st input is a decimal number */
	printf("The character which represents: %c\n",a); /* %c eans that the 1st output is a character */
	system("PAUSE"); /* this line which represent those words "Press any key to continue" */
}