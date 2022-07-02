#include<stdio.h>

void main()
{
    unsigned int x =20,*p;
    p = &x; //Segmentation fault (core dumped)
    short int p1 = *p + 5;
    long int p2 = *p - 5;
    printf("value of X=%d and pointer value:%d\nValuse of P1:%d\nValuse of P2:%d \n",x,*p,p1,p2);
    printf("P1-P2 is %d \n",p1-p2);
    p1++;
    printf("P1++ is %d \n",p1);
    p2--;
    printf("P2-- is %d \n",p2);



}