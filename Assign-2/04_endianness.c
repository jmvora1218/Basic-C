#include <stdio.h>
int main()
{
    int i = 0x76543210;
    //unsigned int i = 0x01234567;
   //unsigned int i = 0xa0b0c0d;
   
   char *c = (char*)&i;
   /*
   i is of type int. 
   So you are trying to cast address of i as a character pointer and 
   assign it to a local variable called ptr. 
   This way each byte stored in i can be read.
   */

    int j = 0;

   if (*c = 1)
       printf("architecture is Little endian");
   else
       printf("architecture is Big endian");

    for(j=0; j<4; j++) {
        printf("\n  Address of 0x%02x = %d", c[j], &c[j]);
    }

   return 0;
}
