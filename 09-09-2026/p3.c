//Code by Tejas L P
//Date:09-09-2026

#include <stdio.h>
//writing a function to swap the first two characters in the string
void swap(char str[])
{
char temp=str[0];
str[0]=str[1];
str[1]=temp;
}
//Main program begins
int main()
{
//declaring string before acepting from user
char str[21];
printf("Enter string:");
//accepting string
scanf("%20[^\n]",str);
//checking if string is atleast 2 characters long
if(str[1]=='\0')
{
printf("Input string must atleast be 2 characters long");
}
//swapping the characters
else
{
swap(str);
printf("%s",str);
}
}
