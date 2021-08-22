#include<stdio.h>
int main()
{	
   int a=13,b=18;	
   printf("before swaping a=%d b=%d",a,b);	
   a=a+b;	
   b=a-b;	
   a=a-b;	
   printf("\nafter swapping a=%d b=%d",a,b);	
   return 0;
}
