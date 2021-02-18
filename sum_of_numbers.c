//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>
int main()
{
  int n,i,sum=0;
  printf("Enter the number of numbers you want to add: ");
  scanf("%d", &n);
  for(i=1;i<=n;i++)
  {
    sum=sum+i;
  }
  printf("The sum of first %d number = %d", n, sum);
  return 0;
}
