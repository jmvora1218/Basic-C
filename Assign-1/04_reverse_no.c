#include<stdio.h>
int main(){
	int a,b,c,d,x,y,z,rev_fun;
	printf("Enter 4 Digit Numner:");
	scanf("%d",&a);
	c = a/1000;
	x = a%1000;
	b = x/100;
	y = x%100;
	d = y/10;
	z = y%10;
	rev_fun=z*1000+d*100+b*10+c;
	printf("Reverse: %d\n",rev_fun);
	printf("%d, %d, %d, %d\n",z,d,b,c);
}
