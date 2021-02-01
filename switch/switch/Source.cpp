/* this program helps you to calculate 2 numbers with the basic 4 arithmatic operations */
#include <stdio.h> /* calls standard input output */
#include <stdlib.h> /* calls the standard library */
void main() /* void means that the function is empty , main() is the inital and main function which starts */
{
	float a; float b; float c; char x; /* the variables , in this case there are 1st & 2nd number , & an operation */
	printf("Welcome to Dia'a Productions\n\nThis tool calcualtes 2 numbers with the basic 4 arithmatic operations\n\n");
	printf("Insert operation + , - ,* , /\n");
	scanf("%c",&x); /* the input operation injection */
	if (x!='+' && x!='-' && x!='*' && x!='/') {printf("Invalid input\a\n");system("PAUSE");return;}
	else
	{L1:
	printf("Insert 1st number : "); 
	scanf("%f",&a);   /* the 1st number input */
	printf("Insert 2nd number : ");
	scanf("%f",&b);   /* the 2nd number input */
		    switch(x) /* means that the user clicks a button which represents the variable 'x' */
	{case '+': /* if (x=='+') */
	{c=a+b;printf("%f\n",c);}
	break;
	case '-': /* if (x=='-') */
		{c=a-b;printf("%f\n",c);}
		break;
	case '*': /* if (x=='*') */
		{c=a*b;printf("%f\n",c);}
		break;
	case '/': /* if (x=='/') */
		{c=a/b;printf("%f\n",c);}
		break;
	default: /* else */
		{printf("invalid input\a\n");}
		}
	}
	printf("try again ? , Insert 1\nWant to quit ? , Insert 0\n");
	int q;
	scanf("%d",&q);
	if (q==0) {goto L0;}
	else if (q==1) {goto L1;}
	else {printf("invalid input\a\n");}
		L0: system("PAUSE"); /* it makes the program pause and prints "Press any key to continue" */
	}

