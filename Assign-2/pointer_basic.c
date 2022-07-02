#include<stdio.h>

int main()
{
    float var = 3.1415,*ptr;

    ptr = &var;   //ptr references var

    printf("Address of var = %x\n",&var);
    printf("ptr is pointing to an address  %x\n",ptr);

    /* use '*' operator to access the value stored at ptr,
       i.e. dereferencing ptr */
    printf("Value stored at ptr = %f",*ptr);

    return 0;
}