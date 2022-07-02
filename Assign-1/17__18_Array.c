#include<stdio.h>

int main()
{
	int a[10],i,num,sum=0;
	printf("Enter number: ");
	scanf("%d", &num);
	// reading array
	for(i=0; i< num; i++)
 	{
  		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
 	}
	
	/* Finding sum */
 	for(i=0; i< num; i++)
	{
  		sum = sum + a[i];
 	}
	printf("sum of Array:%d \n",sum);
	float avg = (float)sum/num;
	printf("Avg of entered Num:%f \n", avg);
	
	/* Finding large */
 	int large_num = a[0],small_num;
	for(i=0;i< num;i++)
	{
		if(a[i]>large_num)
  		{
   			large_num = a[i];
  		}
		if(a[i]<small_num)
		{
			small_num = a[i];
		}
	}
	printf("Large number is:%d \nSmall Number is:%d\n",large_num,small_num);
return 0;
}
