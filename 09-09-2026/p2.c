#include <stdio.h>
void printBorder(int count)
{
for(int i=1;i<count;i++)
{
printf("*");
}
printf("*\n");
}
int main()
{
printBorder(5);
printBorder(4);
}
