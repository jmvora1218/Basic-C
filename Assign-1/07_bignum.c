#include<stdio.h>

int main()
{
	int a,b,c,d;
	
	printf("Enter 3 number:");
	scanf("%d %d %d",&a,&b,&c);
	
	d = (a > b) ? (a>c?a:c):(b>c?b:c);
	
	printf("Biggest number is: %d \n", d);
return 0;
}
