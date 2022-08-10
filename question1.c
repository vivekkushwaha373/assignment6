#include<stdio.h>
int main()
{
int N,i,sum=0;
printf("enter the number upto which the sum of N natural number is reqired\n");
scanf("%d",&N);
for(i=1;i<=N;i++ )
{
    sum=sum+i;
}
printf("the sum of N natural number is %d",sum);
return 0;
}