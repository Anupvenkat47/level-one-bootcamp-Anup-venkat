//Write a program to add two user input numbers using 4 functions.
#include<stdio.h>
int main()
{
   int a,b,sum;
   a=input();
   b=input();
   sum=adding(a,b);
   output(sum);
   return 0;
}
int input()
{
  int c;
  printf("Enter the number: ");
  scanf("%d",&c);
  return (c);
}
int adding(int a,int b)
{
  int add;
  add=a+b;
  return (add);
}
void output(int sum)
{
  printf("The sum of the given numbers is %d",sum);
}
