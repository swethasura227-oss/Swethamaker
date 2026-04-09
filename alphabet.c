#include <stdio.h>
void main()
{
    char ch;
    printf("enter the character:");
    scanf("%c",&ch);
    int result=(ch>=65&&ch<=90 || ch>=97&&ch<=122);
    printf("the %c is alphabet is %d",ch,result);
}