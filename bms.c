#include<stdio.h>
void main()
{
    int num1,num2,num3;
    printf("enter the num1 num2 num3:\n");
    scanf("%d %d %d",&num1,&num2,&num3);
    if (num1>num2&&num1>num3)
    {
        printf("%d is big\n",num1);
        if (num2>num3)
        {
            printf("%d is middle\n",num2);
            printf("%d is small\n",num3);
        }
        else
        {
            printf("%d is middle\n",num3);
            printf("%d is small\n",num2);
        }
    }
    else if (num2>num3)
    {
        printf("%d is big\n",num2);
        if(num3>num1)
        {
            printf("%d is middle\n",num3);
            printf("%D is small\n",num1);
        }
        else
        {
            printf("%d is middle\n",num1);
            printf("%d is small\n",num3);
        }
    }
    else
    {
        printf("%d is big\n",num3);
        if(num1>num2)
        {
            printf("%d is middle\n",num1);
            printf("%d is small\n",num2);
        }
        else
        {
            printf("%d is middle\n",num2);
            printf("%d is small\n",num1);
        }
        }
    }
        