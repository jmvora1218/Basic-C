#include <stdio.h>
int main ()
{
 	int a=2, b=3, c;

	printf("Before Swap: A=%d, B=%d \n", a,b);
	printf("without temp\n");
	a = a + b;
	b = a -b;
	a = a -b;

	printf("After Swap: A=%d, B=%d\n", a,b);
	b = a;
	c = b;
	a = c;
	printf("After Swap with Temp A=%d, B=%d \n", a,b);
	
	c = a^(a^b);
	b = c^(a^b);
	a=c;

	printf("\n with XOR A=%d B=%d", a,b);
}
