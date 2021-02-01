#include <stdio.h>
#include <stdlib.h>
class man
{
public:
	 char gender;
	 int age;
	void ratio() {}; 
};

void main ()
{
	man c1;
	man c2;
	c1.gender;c1.age;
	printf("Insert gender , then age of the person\n");
	scanf("%c%d",c1.gender,c1.age);
	printf("Gender : % c\nAge : %d\n",c1.gender,c1.age);
	system("PAUSE");
}
