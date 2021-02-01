/*swapping 2 variables without any temporary variable , Enjoy :D*/
#include <stdio.h>
#include <stdlib.h>
void main()
{
	int x; /*initial value of 'x'*/
	int y; /*initial value of 'y'*/
	printf("Insert 'x' then 'y'\n");
	scanf("%d%d",&x,&y); /* the symbol '&' means calling the location of the variable to put its value*/
	{y=x+y;x=y-x;y=y-x;} /*3 arithmatic operations which turns x=y and y=x*/
	printf("-------------------\n");
	printf("x= %d\ny = %d\n",x,y); /*printing the modified values of 'x' and 'y'*/
	system("PAUSE");
}