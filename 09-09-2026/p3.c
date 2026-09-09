#include <stdio.h>
int main()
{
char str[21];
printf("Enter string:");
scanf("%20s[^\n]",str);
if(str[1]=='\0')
{
printf("Input string must atleast be 2 characters long");
}
else
{
char temp=str[0];
str[0]=str[1];
str[1]=temp;
printf("%s",str);
}
}
