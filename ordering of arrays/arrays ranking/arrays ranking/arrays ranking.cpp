#include <stdio.h>
#include <stdlib.h>
void main()
{
	int a[5]; /*the array*/
	int b; /*memorizing the biggest no.*/ 
	int s; /*memorizing the smallest no.*/
	int index; /*the index of the bigger no.*/
	int index2; /*the index of the smallest no.*/
	printf("Insert your object in number format\n");
	/* Insertion of the array */
	for (int m=0;m<5;m++)
	{scanf("%d",&a[m]);}
	/* detecting the biggest one */
	if (a[0]>a[1]) 
	{b=a[0];index=0;}
	else if (a[1]>a[0])
	{b=a[1];index=1;}
	for (int i=2;i<5;i++)
	{if (b<a[i]) 
	{b=a[i];index=i;}
	else if (a[i]<b)
	{continue;}}
	/*-----------------------*/
	/*detecting the smallest one*/
	if (a[0]<a[1]) 
	{s=a[0];index2=0;}
	else if (a[1]<a[0])
	{s=a[1];index2=1;}
	for (int i=2;i<5;i++)
	{if (s>a[i]) 
	{s=a[i];index2=i;}
	else if (a[i]>s)
	{continue;}}
	printf("biggest = %d\nsmallest = %d\n",b,s);
	system("PAUSE");
}