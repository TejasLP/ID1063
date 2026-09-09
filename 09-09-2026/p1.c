#include <stdio.h>
double calculateArea(double length, double width)
{
return length*width;
}
int main()
{
double length,width;
printf("Enter the length:");
scanf("%lf",&length);
printf("Enter the width:");
scanf("%lf",&width);
double area=calculateArea(length,width);
printf("Area:%f\n",area);
}

