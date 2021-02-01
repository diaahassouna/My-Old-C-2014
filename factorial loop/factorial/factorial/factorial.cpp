/* the user inserts any positive integer number then this tool calculates the factorial of it */
/* this program uses "for" as loop typing */ 
#include <stdio.h>
#include <stdlib.h>
void main()
{
	int a; int i;
	printf("Welcome to Dia'a Production\n\n");
	printf("This tool helps you to define the factorial of\nany positive integer\n\n");
    L1:printf("Insert any positive number : ");
	scanf("%d",&a);
	if (a<=0) {printf("invalid input\n");goto L1;} /* do not use "goto" if the user inserts another input sort , it will make an infinit loop */
	int sum=1;
	for (i=a;i>=1;i-=1) // intializing i to a , going downwards to 1 by steps , each step = 1
	{sum=sum*i;} //the operation
	printf("factorial = %d\n",sum); // the final rresult of operations which we want
	system("PAUSE");
}