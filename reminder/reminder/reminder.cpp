#include <stdio.h>
#include <stdlib.h>
void main()
{
	int i; int j;
	printf("1\t\t2\t3\t4\t5\n_\t\t_\t_\t_\t_\n\n");
for (i=1;i<=5;i++)
{ 
	for (j=1;j<=5;j++){
		printf("%d\t",i*j);if (j==1){printf("|\t");}}
printf("\n");}
system("PAUSE");
}
