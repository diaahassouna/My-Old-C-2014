/*this piece explains what's occur when one uses the unary operators such like ++ to any variable*/
#include <stdio.h>
#include <stdlib.h>
int x,y;
int a,b;
void main()
{
	x=10;
	y=x++;  /*postfix mode*/
	printf("x = %d\ny = %d\n",x,y);
	a=5;
	b=++a;  /*prefix mode*/
	printf("a = %d\nb = %d\n",a,b);
	system("PAUSE");
}