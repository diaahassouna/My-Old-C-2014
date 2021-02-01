#include <stdio.h>
#include <stdlib.h>
void main()
{
	/*this program calculates the size of each variable type on the memory*/
	printf("A size of char is %d bytes\n",sizeof(char));
	printf("A size of int is %d bytes\n",sizeof(int));
	printf("A size of short is %d bytes\n",sizeof(short));
	printf("A size of long is %d bytes\n",sizeof(long));
	printf("A size of unsigned char is %d bytes\n",sizeof(unsigned char));
	printf("A size of unsigned int is %d bytes\n",sizeof(unsigned int));
	printf("A size of unsigned short is %d bytes\n",sizeof(unsigned short));
	printf("A size of unsigned long is %d bytes\n",sizeof(unsigned long));
	printf("A size of float is %d bytes\n",sizeof(float));
	printf("A size of double is %d bytes\n",sizeof(double));
	system("PAUSE");
}