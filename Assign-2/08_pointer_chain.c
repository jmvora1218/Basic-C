#include<stdio.h>

void main()
{
    int x=20;    // Declaring pointer to variable var
    int *p;    // Declaring pointer to pointer variable *p
    int **q;     // Declaring pointer to double pointer **q
    p=&x;           // to pointer variable x
    q=&p;           
    printf("value of X:%d \n",x);
    printf("value of *p:%d where Address is :[%p]\n",*p,*p);
    printf("value of **q:%d where Assress is :[%p]\n",**q,**q);


}