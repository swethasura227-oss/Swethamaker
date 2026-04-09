#include <stdio.h>
void main()
{
  int  a[6]={-3,6,13,8,19,16};
    for(int i=0;i<=5;i++)
    {
        if(i%2==0)
        {
            printf("%d is even position value\n",a[i]);
        }
    }
}