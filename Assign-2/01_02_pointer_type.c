#include<stdio.h>
#include <stdlib.h>
//Pointer casting int to float
void main(){
	int a =10;
	float b = 20.30;
	
	int *int_ptr = (int *)malloc(sizeof(int));
	float *float_ptr = (float *)malloc(sizeof(float));
	
	*int_ptr = (int)b;
	*float_ptr = (float)a;

	printf("Int A:%d \nFloat B:%f\n",*int_ptr,*float_ptr);
	
	if(int_ptr == NULL){
		int_ptr = NULL; // To handle NULL point 
		return;
	}else
	{
		printf("NULL POINTER ERROR: Segmentation fault (core dumped) ");
	}
	
	printf("\n NULL pointre %d \n",*int_ptr);
}