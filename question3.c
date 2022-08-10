#include<stdio.h>
int main()
{
int N,i,sum=0;
printf("enter the number upto which the sum of N odd natural number is reqired\n");
scanf("%d",&N);
for(i=1;i<=N*2; )
{
    sum=sum+i;
    i=i+2;
}
printf("the sum of N odd natural number is %d",sum);
return 0;
}