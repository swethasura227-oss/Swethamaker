#include <stdio.h>
void main()
{
    char ch;
    printf("enter the digit:");
    scanf("%c",&ch);
    int result=(ch>=48&&ch<=57); 
    printf("the %c is digit is %d",ch,result);
}