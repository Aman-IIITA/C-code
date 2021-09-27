#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void fun()
{
   static int i;
   ++i;
   printf("%d",i);
}
void main()
{
   int i=1;
   for(;i<7;)
   printf("%d ",i+=2);
}
