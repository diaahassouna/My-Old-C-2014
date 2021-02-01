#include <stdio.h>
#include <stdlib.h>
void main()
{
	int a[5]; /*the input array*/
	int a2[5]; /*the desired array*/
	int b; /*memorizing the biggest no.*/ 
	int s; /*memorizing the smallest no.*/
	int index; /*the index of the bigger no.*/
	int index2; /*the index of the smallest no.*/
	printf("Insert your array's objects in number format to be ordered\n");
	/* Insertion of the array */
	for (int m=0;m<5;m++)
	{scanf("%d",&a[m]);}
	printf("\n\n------------------------------------------------------------\n\nOrdered array = \n\n");
	/*detecting the smallest one*/
	if (a[0]<=a[1]) 
	{s=a[0];index2=0;}
	else if (a[1]<a[0])
	{s=a[1];index2=1;}
	for (int i=2;i<5;i++)
	{if (s>a[i]) 
	{s=a[i];index2=i;}
	else if (a[i]>s)
	{continue;}}
    /*-----------------------*/
	for (int m=0;m<5;m++)
	{
	/* detecting the biggest one */
	if (a[0]>=a[1]) 
	{b=a[0];index=0;}
	else if (a[1]>a[0])
	{b=a[1];index=1;}
	for (int i=2;i<5;i++)
	{if (b<a[i]) 
	{b=a[i];index=i;}
	else if (a[i]<b)
	{continue;}}
	/*detecting the biggest one is done*/
	/*-----------------------*/
	/*Insertion the biggest value from the index no. 0 of the desired array 'a2'*/
	a2[m]=b; 
	/*changing the biggest value by the smallest value into the input array
	Notice that : definition of the biggest value must be by using its index */
	a[index]=s;
	if (b==s) {break;} /*this condition occurs when all objects in the input array equals the smallest value*/
	}
	for (int c=0;c<5;c++)
	{printf("%d\n",a2[c]);}
	printf("\n");
	system("PAUSE");
}