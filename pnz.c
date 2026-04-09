#include <stdio.h>
void main()
{
    int num;
    printf("enter the number:\n");
    scanf("%d",&num);
    if(num>0)
    {
        printf("it is even number");
    }
    else if(num<0)
    {
        printf(" it is odd number");
    }
    else
    {
        printf("it is zero");
    }
    
}