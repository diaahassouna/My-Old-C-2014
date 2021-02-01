#include <stdio.h>
#include <stdlib.h>
char x[201];
char quit[4]={'q','u','i','t'};   /*the type command to quit the program*/
char quit1[4]={'e','x','i','t'};   /*the type command to exit the program*/
char edit (char x[201])  /*the function of editing command*/
{
	for(int i=0;i<202;i++)  /*the loop which replaces the old string by the new one*/
	{
		scanf("%c",&x[i]);
		if (x[i]=='.'||x[i]=='.')
		{
			break;
		}
	}
	return x[201];  /*the new string*/
}
void main()
{
	while (true)   /*the main infinite loop*/
	{
		printf("Enter your word : ");
		for(int i=0;i<202;i++)  /*the loop which generates the desired string*/
	    {
		scanf("%c",&x[i]);
		if (x[i]=='.'||x[i]=='.')
		    {
			    break;
		    }
		else if (x[201]==quit[4]||x[201]==quit1[4])  /*when the command is to quit the program*/
		    {
				return;
		    }
	    }
		printf("the word is : ");
		for(int i=0;i<201;i++)
		{
			printf("%c",x[i]);
			if (x[i]=='.'||x[i]=='.')
			{
				printf("\n");
				break;
			}
		}
	}
	system("PAUSE");
}