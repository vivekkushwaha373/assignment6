#include<stdio.h>
int main()
{
    int n1,n2,i;
    printf("enter the first number: ");
    scanf("%d",&n1);
    printf("enter the second number: ");
    scanf("%d",&n2);
    i=n1>=n2?n1:n2;
    while()
    {
     if(i%n1==0 && i%n2==0)
     {
    printf("L.C.M is %d",i);
    break;
    }
     i++;

    }
    return 0;
}