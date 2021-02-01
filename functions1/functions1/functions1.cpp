#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float a;
float b;
float c;
float add(float a,float b)
{c=a+b;return c;}
float subtract(float a,float b)
{c=a-b;return c;}
float multiply(float a,float b)
{c=a*b;return c;}
float devide(float a,float b)
{c=a/b;return c;}
void main()
{ char x;
printf("Insert operator , then 1st no. , then 2nd no.\n\nNotice that operation are + , - , * , /\n\n");
scanf("%c%f%f",&x,&a,&b);
switch(x)
{
case '+' :
    {c=add(a,b);printf("Sum = %f\n",c);}break;
case '-' :
	{c=subtract(a,b);printf("Sum = %f\n",c);}break;
case '*':
	{c=multiply(a,b);printf("Sum =%f\n",c);}break;
case '/':
	{c=devide(a,b);printf("Sum = %f\n",c);}break;
default:{printf("invalid input\n");}
}
	
	system("PAUSE");

}