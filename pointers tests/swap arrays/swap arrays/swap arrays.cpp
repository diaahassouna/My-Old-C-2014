/*swapping 2 arrays with one pointer in the real time , Have Fun :D*/
/*Notice : it's a simple tricky , cheating and static case , but maybe this opens the door to the ((real time coding)) and ((real time pointing))*/
#include <stdio.h>
#include <stdlib.h>
void main()
{
	int a[5]; /*the 1st array*/
	int b[5]; /*the 2nd array*/
	int *pointer; /*the pointer selector*/
	printf("Insert you 1st array objects\n");
	for (int m=0;m<5;m++)
	{scanf("%d",&a[m]);}
	printf("Insert you 1st array objects\n");
	for (int n=0;n<5;n++)
	{scanf("%d",&b[n]);}
	printf("---------\n1st array = \n");
	for (int i=0;i<5;i++)
	{pointer=&b[i];printf("%d\n",*pointer);} /*pointer points to the 2nd array*/
	printf("---------\n2nd array = \n");
	for (int j=0;j<5;j++)
	{pointer=&a[j];printf("%d\n",*pointer);} /*pointer points to the st array*/
	system("PAUSE");
}