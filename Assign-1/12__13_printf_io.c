#include<stdio.h>

void main()
{
	int a=10,b=20,c=30;
	float d=50.23, e=55.5;
	printf("A=%5d,\nB=%05d,\nc=%-5d,\nD=%2f,\nE=%.2f\n",a,b,c,d,e);

	int k = (++a,++b,++c,a+5);

	printf("\nK:%d\n",k);

	//int j = ++a++b++c//a+5;
	//printf("Value of J:%d\n", j);

	int f=++a;
	int x=++b;
	int y=++c;
	int z=a+5;

	printf("\nValue F:%d,\nX:%d,\nY:%d,\nZ:%d",f,x,y,z);
	
}

