#include <stdio.h>
#include <stdlib.h>
char edit(char x)  /*the function o editing any charcter , this experiment is the beginning to edit anything*/
{
	char y; /*the charcter after editing*/
	printf("Enter your character : ");
	scanf(" %c",&y);
	x=y; /* 'x' is the original character which is transformed to the charcter 'y' */ 
	return x;
}
void main()
{
	while (true)
	{
	printf("Insert any character : ");
	char a; /*the original character in the main program*/
	scanf(" %c",&a);
	printf ("original character : %c\nInsert 'e' to edit , anything else to continue\n",a);
	char d; /*the switch case character*/
	scanf(" %c",&d);
	switch (d)
	{
	case 'e':
		{a=edit(a);}
		break;
	default:
		{system("PAUSE");return;}
	}
	printf("original charcter : %c\n",a);
	}
	system("PAUSE");
}