#include<stdio.h>

int main(){
	int k,i,y,x,q,p;
	//i =10;
	/*	++k :- this is pre-increment, means the value of variable is first incremented to +1 and then the result is printed.
		K++ :- this is post-increment, means first the value of variable is printed and then incremented to +1.
 	*/ 
	//k=++i;
	//printf("K: %d \n" , k);
	x=10;
	//y=x++*10;	
	y=++x*10;
	printf("Y: %d \n", y);
	
	p=99;
	q=--p/3;
	printf("Q = %d \n", q);
}
