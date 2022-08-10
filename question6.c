#include<stdio.h>
int main()
{
    int num,i=1,k=1;
    printf("enter a number: ");
    scanf("%d",&num);
    while(i<=num)
    {
        k=k*i;
        i++;
    }
    printf("factorial of %d is : %d",num,k);
    return 0;
}