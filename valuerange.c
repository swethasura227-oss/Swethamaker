#include <stdio.h>
void main()
{
  int a;
  printf("enter the value:");
  scanf("%d",&a);
  int ll=(a>=3);
  int ul=(a<=13);
  int result=(ll&&ul);
  printf("the value %d is between 3-13 is :%d",a,result);
}