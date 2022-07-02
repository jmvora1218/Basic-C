#include<stdio.h>

int main()
{
	int a=5,k=2;
	//toggle kth bit
	a = a ^ (1 << (k-1));
	printf("\nToggle kth bit A:%d",a);
	int b=5;
	b = b | (1 << (k-1)); // set kth bit
	printf("\nSet Kth bit B:%d",b);
	int c=5;
	c = c & (~(1 << (k-1)));
	printf("\nclear Kth bit C:%d\n",c);
	int d=5;
	d = (d & (1 << (k - 1))) >> (k - 1);
	printf("query kth bit %d \n",d);
return 0;
}
