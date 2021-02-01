/* conceptual definition of pointers and what can and cannot do */
#include <stdio.h>
#include <stdlib.h>
void main()
{
	int *pointer; /*definition of the value of what the pointer points , Notice that the pointer itself is a variable with a fixed location
	                and the characteistic of it is to define the location of other variables*/
	int x=3; /*an ordinary variable , this variable has a fixed location*/
	int y=5;
	int *pointer2; /*this pointer points on the variable "pointer" , its value right now is the location of the varaible "pointer"*/
	pointer=&x;    /*the value of the pointer is the location of the ordinary variable*/
	pointer2=&*pointer; /*the value of "pointer2" equals the value which "pointer" points to , which is x" 
						  Notice that you cannot type ((pointer2=&pointer)) */
	printf("location of x 'type_pointer' : %d\nx 'type_*pointer' = %d\n",pointer,*pointer); /*{ pointer = location of x }, { *pointer = value of x }*/
	pointer=&y;
	printf("location of y 'type_pointer' : %d\ny 'type_*pointer' = %d\n",pointer,*pointer); /*{ pointer = location of y }, { *pointer = value of y }*/
	pointer=&x;
	printf("location of x 'type_&x' : %d\n",&x); /*the location of the ordinary variable , it equals the value of th e pointer*/
	printf("-----------------------------\nLocations of the pointers\n\n");
	printf("location of 'pointer' 'type_&pointer' : %d\n",&pointer);
	printf("location of 'pointer2' type_&pointer2' : %d\n",&pointer2);
	system("PAUSE");
}