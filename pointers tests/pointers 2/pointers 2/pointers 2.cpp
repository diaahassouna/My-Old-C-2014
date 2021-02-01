#include <stdio.h>
#include <stdlib.h>
void main()
{
	int x=145;
	int a=45;
	int b=78;
	int *pointerx; /*definition of the pointer which points to 'x'*/
	int *pointer; /*blank pointer*/
	int blank; /*blank variable*/
	int *pointery; /*definition of the pointer which points to 'y'*/
	int y;  /*pointer of the pointer 'pointerx'*/
	int z;  /*pointer of 'x' - pointer of the pointer 'pointerx'*/
	pointerx=&x; /*pointer of 'x'*/
	pointery=&y; /*pointer of 'y'*/
	y=(int)&pointerx; /*pointer of the pointer 'pointerx'*/
	printf("value of x : %d\nvalue of 'x' [another form] : %d\npointer of 'x' : %d\npointer of 'x' [another for] : %d\npointer of pointer of 'x' ('pointerx') : %d\npointer of pointer of 'x' ('pointerx') [another form] : %d\n",*pointerx,x,pointerx,&x,y,(int)&pointerx);
	z=(int)pointerx-y; /*pointer of 'x' - pointer of the pointer 'pox'*/
	printf("-------------------------------\nSubtraction in the same layer\n-------------------------------\n");
	printf("1st layer\n---\n");
	printf("pointer of 'x' - pointer of 'a' : %d\n",&x-&a);
	printf("pointer of 'x' - pointer of 'b' : %d\n",&x-&b);
	printf("pointer of 'x' - pointer of blank variable 'blank' : %d\n",&x-&blank);
	printf("pointer of 'x' - pointer of 'y' : %d\n",&x-&y);
	printf("pointer of 'x' - pointer of 'z' : %d\n",&x-&z);
	printf("---\n2nd layer\n---\n");
	printf("pointer of pointer of 'x' - pointer of blank pointer 'pointer' : %d\n",(int)&pointerx-(int)&pointer);
	printf("pointer of pointer of 'x' - pointer of pointer of 'y' : %d\n",(int)&pointerx-(int)&pointery);
	printf("-------------------------------\nSubtraction between layer(1) & layer(2)\n-------------------------------\n");
	printf("for the same variable 'x'\n-->pointer of 'x' - pointer of pointer of 'x' ('pointerx') : %d\n",z);
	system("PAUSE");
}