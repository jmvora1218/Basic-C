#include<stdio.h>
#include<stdint.h>

//int main(int argc, const char *input_ip[])
int main()
{
	const char *input_ip="191.255.254.40";
	//uint32_t ip;
	
	unsigned int ip;
	unsigned char *s_ip=(unsigned char *) &ip;		//typecast to char for ip
	
	//unsigned char *s_ip= &ip; 		//to Test type cast
	
	sscanf(input_ip, "%hhu.%hhu.%hhu.%hhu",&s_ip[3],&s_ip[2],&s_ip[1],&s_ip[0]);
	
	printf("IP to Desimal:%lu \n",ip);
	
	printf("%u.%u.%u.%u \n", 
		((ip & 0xff000000) >> 24), 
		((ip & 0x00ff0000) >> 16), 
		((ip & 0x0000ff00) >> 8), 
		(ip & 0x000000ff)
	);
return 0;
}
