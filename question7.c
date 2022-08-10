#include<stdio.h>
int main()
{
    int num,i=0;
    printf("enter a number: ");
    scanf("%d",&num);
    while(num!=0)
    {
     num=num/10;
     i++;
    
    }
    // i=i+1;
    if(i==3)
    printf("It is a three digit number");
    else
    printf("it is not a three digit number");
    return 0;
}