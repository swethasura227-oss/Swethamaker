#include <stdio.h>
void main()
{
  char ch;
  printf("enter the character:");
  scanf("%c",&ch);
  int ll=(ch>=65);
  int ul=(ch<=90);
  int result=ll&&ul;
  printf("the %c is in the range of A-Z is:%d",ch,result);
}