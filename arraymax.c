#include <stdio.h>
void main()
{
  int size;
  printf("enter the number of elements to store:\n");
  scanf("%d",&size);
  int a[size];
  for(int i=0;i<=size-1;i++)
  {
      printf("enter the %d value:\n",(i+1));
      scanf("%d",&a[i]);
  }
  int max=a[0];
  for(int i=0;i<=size-1;i++)
  {
      if(a[i]>=max)
      {
          max=a[i];
      }
     
  }
   printf("%d is max value\n",max);
}