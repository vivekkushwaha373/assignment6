#include<stdio.h>
int main()
{
   int reverse=0,i;
   int number;
   printf("enter a number: ");
   scanf("%d",&number);
   while(number!=0)
   {
       i=number%10;
    reverse=reverse*10+i;
       number=number/10;
   }
   printf("reverse number is %d",reverse);
   return 0;
}