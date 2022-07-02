#include<stdio.h>

int main()
{
	int a=20 ;
	float c=20.44;
	double d=20.2;

	printf("HEX of 20 is a:%x \nHex of 20.44 is c:%lu \nHex of 20.44 is D:%lu \n",a,*(unsigned int*)&c,*(unsigned long int*)&c);

return 0;
}
