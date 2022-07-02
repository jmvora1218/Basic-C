#include<stdio.h>

int main(){
	int area,r=11;
	const double PI  =3.141592653589793238463;
	area = PI * r*r;
	printf("circle area %lld\n",area);
// with "-E option" of gcc and tool "cpp" output is same.

}
