#include<stdio.h>

void main()
{
    const int x=10; 
    int *p;
    p = (int *)&x; 
    
    *p=20; 
    
    printf("Value of X:%d \nValue of *P:%d \nValue of P:%d\n",x,*p,p);
}