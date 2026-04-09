#include <stdio.h>
void main()
{
  int  a[5]={6,7,-3,-28,2};
    for(int i=0;i<=4;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d is even in array\n",a[i]);
        }
    }
}