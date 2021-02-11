//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>
int main()
{
    int h,d,b;
    float vol;
    printf("Enter the Height: ");
    scanf("%d",&h);
    printf("Enter the Depth: ");
    scanf("%d",&d);
    printf("Enter the Base: ");
    scanf("%d",&b);
    vol=((1/3)*((h*d*b)+(d/b)));
    printf("The Volume of tromboloid is %f",vol);
    return 0;
}
