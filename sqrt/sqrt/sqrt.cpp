#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main()
{
	float a; float b;
	printf("Insert any number : ");
	scanf("%f",&a);
	if (a<0) {a=abs(a);b=sqrt(a);printf("Square Root = %fi\n",b);system("Pause");return;} //imaginary part
	else if (a>=0) //real part
	{b=sqrt(a);
	printf("Square Root = %f\n",b);}
	else {printf("invaled input\n");}
	system("PAUSE");
}