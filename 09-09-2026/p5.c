//Code by Tejas L P
//Date: 09-09-2026
#include <stdio.h>
//checks whether the string is palindrome or not and accordingly returns 1 or 0
int checkPalindrome(char *str,int len)
{
for(int i=0;i<=len-i-1;i++)
{
//Checking each character from the start with the corresponding character from the back
if(str[i]==str[len-i-1])
{
continue;
}
else{// returns 0 if one of the characters dont match
return 0;
}
}
return 1;
}
//finding exact position where the string has characters and is not blank through findLen function
int findLen(char *str)
{
int len=0;
for(int i=0;str[i]!='\0';i++) len=i+1;
return len;
}
//main function begins here
int main()
{
//declaring string
char str[50];
//Accepting input
printf("Input:");
scanf("%[^\n]",str);
// finding length of string
int len=findLen(str);
printf("Output: ");
// Output
if(checkPalindrome(str,len))
{
printf("Palindrome");
}
else
{
printf("Not a Palindrome");
}
}
