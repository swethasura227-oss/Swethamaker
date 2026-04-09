#include <stdio.h>
void main()
{
    int a;
    printf("enter the number\n");
    scanf("%d",&a);
    while(a!=0)
    {
        int dig=a%10;
        if(dig%2==0)
        {
            printf("%d",dig);
        }
        a=a/10;
    }
}