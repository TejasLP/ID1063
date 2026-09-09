//Code by Tejas L P
//Date:09-09-2026
#include <stdio.h>
int size;
//Writing a function to obtain the index of the first occurence of the first character that occurs more than once 
int indexFind(char *str, char c)
{
for(int i=0;i<size;i++) //Comparing each character of the string with given character
{
if(c==str[i])
{
return i;
}
}
return -1;
}
int main()
{
//declaring string, its size and character to be found
size=21;
char str[size],c;
//accepting string and character
printf("Input: ");
scanf("%[^\n]",str);
printf("character: ");
scanf(" %c",&c);
//using defined function indexFind() to obtain index of the first occurence of accepted character
int pos=indexFind(str,c);
if(pos!=-1)//checking if character exists in the given string and appropriately handling cases
{
printf("Output: %d",pos);
}
else printf("%d",pos);
}
