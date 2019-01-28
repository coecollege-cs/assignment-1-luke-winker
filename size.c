/* 

Luke Winker
22 January 2019
Software Engineering

*/

#include <stdio.h>

int main()
{
  printf("The size of int is %1u \n", sizeof(int));
  printf("The size of char is %1u \n", sizeof(char));
  printf("The size of long is %1u \n", sizeof(long));
  printf("The size of float is %1u \n", sizeof(float));
  printf("The size of double is %1u \n", sizeof(double));
  printf("The size of unsigned int is %1u \n", sizeof(unsigned));
  printf("The size of unsigned char is %1u \n", sizeof(unsigned char));
  printf("The size of unsigned long is %lu \n", sizeof(unsigned long));
  printf("The size of int * is %1u \n", sizeof(int *));
  printf("The size of char * is %1u \n", sizeof(char *));  
  printf("The size of long * is %1u \n", sizeof(long *));
}
