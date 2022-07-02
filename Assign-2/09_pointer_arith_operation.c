#include<stdio.h>
#include<stdlib.h>

void main()
{
    int a[5] = {10, 20, 30, 40, 50 };
    int *p=a, *q=*(&a+1)-1;
   
    for(int i=0;i<a[i];i++)
    {
        printf("Printer Address[%p] Array: a[%d]=%d\n",a[i],i,a[i]);
    }

    printf("Printer Address[%p] Array P=%d\n",*p,*p);
    printf("Printer Address[%p] Array q=%d\n",*q,*q);


    printf(
        "%d == *a || %p\n", 
        *a, *a
    );
    
    printf(
        "%d == *a+1 || %p\n", 
        (int *) a+1, (int *) a+1
    );

    int* ptr = &a[0];

    ptr = ptr+1;

    ptr = malloc(sizeof(int));
    *(ptr) = 2366; 

    printf(
        "ptr = %p , *ptr = %d || %d == &ptr+1 || %p\n", 
        *ptr, *ptr, 
        (int *) ptr+1, (int *) ptr+1
    );

    ptr = &a[1];

    printf(
        "ptr = %p , *ptr = %d || %d == &ptr+1 || %p\n", 
        *ptr, *ptr, 
        (int *) ptr+1, (int *) ptr+1
    );
    
    *p++;
    *q--;
    printf("Printer Address[%p] Array P++=%d || Printer Address[%p] Array q++=%d \n",*p,*p,*q,*q);

    *++p;
    *--q;
    printf("Printer Address[%p] Array *++P=%d || Printer Address[%p] Array *--q=%d \n",*p,*p,*q,*q);
    
    (*p)++;
    (*q)--;
    printf("Printer Address[%p] Array (*P)++=%d || Printer Address[%p] Array (*q)--=%d \n",*p,*p,*q,*q);
    
    ++(*p);
    --(*q);
    printf("Printer Address[%p] Array ++(*P)=%d || Printer Address[%p] Array --(*q)=%d \n",*p,*p,*q,*q);
    
    ++*p;
    --*q;
    printf("Printer Address[%p] Array ++*P=%d || Printer Address[%p] Array --*q=%d \n",*p,*p,*q,*q);
    
    *(p++);
    *(q--);
    printf("Printer Address[%p] Array *(P++)=%d || Printer Address[%p] Array  *(q--)=%d \n",*p,*p,*q,*q);
    
    *(++p);
    *(--q);
    printf("Printer Address[%p] Array *(++P)=%d || Printer Address[%p] Array *(--q)=%d \n",*p,*p,*q,*q);
}