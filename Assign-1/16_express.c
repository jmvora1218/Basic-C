#include<stdio.h>

void main()
{
	int x=1,y=5;
	// Execution is from R2L and condition is Right for X.
	int z = ++x && ++y;
	//int z = --x && --y; // 
	//int z = ++x || ++y;
	//int z = --x || --y;
	printf("Z : %d \n",z);
}
