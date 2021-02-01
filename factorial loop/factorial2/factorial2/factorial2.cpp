/* the user inserts any positive integer number then this tool calculates the factorial of it */
/* this program uses "while" as loop typing */ 
#include <stdio.h>
#include <stdlib.h>
void main()
{
	int a;
	printf("Welcome to Dia'a Production\n\n");
	printf("This tool helps you to define the factorial of\nany positive integer\n\n");
	L1:printf("Insert any positive integer number : ");
	scanf("%d",&a);
	if (a<=0) {printf("invaled input\n");goto L1;} /*do not put "goto" if the user will insert another input type "like character" , this makes an infinite loop :p */  
	int i=0; /* intialize the counter "i" */
	int sum=1; /* intialize the value of the variable we want , which is "sum" here */
	while (i<a) /* do not type (i<=a) , it will take the factorial and multiply it with "a+1" , we don't want this to occur  */
	{i+=1; // the counter step
	sum=sum*i; /* the operation of multipling */  }
	printf("factorial = %d\n",sum); /* the wanted final value */
	system("PAUSE");
}
