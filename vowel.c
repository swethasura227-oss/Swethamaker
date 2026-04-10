#include <stdio.h>
void main()
{
    char ch;
    printf("enter the character:");
    scanf("%c",&ch);
    int result=(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
    printf("the %c is an vowel is :%d",ch,result);
}
