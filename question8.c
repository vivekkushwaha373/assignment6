#include<stdio.h>
int main()
{
    int num,i;
    printf("enter a number : ");
    scanf("%d",&num);
    for(i=2;i<=num;i++)
    {
        if(num%i==0 && i!=num)
        {printf("given number is not a prime");
        break;}
        if(num%i==0 && i==num)
        printf("given number is a prime number");
        
    }
    if(num==1)
    printf("given is not a prime number");
    return 0;
}