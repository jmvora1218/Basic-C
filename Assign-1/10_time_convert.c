#include<stdio.h>

int main()
{
	const char *time="01:01:01";
	unsigned int h,m,s;
	//unsigned char *conv = (unsigned char *)&hms;
	sscanf(time,"%d:%d:%d", &h,&m,&s);
	int second = s+(m*60)+(h*60*60);
	printf("Time %s in Second:%u\n",time,second);
	int sec2hr  = (second/60)/60;
	int sec2min = (second/60)%60;
	int sec2sec = second%60;
	printf("second %d to hr: %02d, min:%02d, sec:%02d\n",second,sec2hr,sec2min,sec2sec);
return 0;
}
