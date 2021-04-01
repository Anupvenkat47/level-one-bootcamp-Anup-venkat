//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>
int sumofn();
int main()
{
  int n,sum=0;
  printf("Enter the number of numbers you want to add: ");
  scanf("%d", &n);
  sum=sumofn(sum,n);
  printf("The sum of given %d number = %d", n, sum);
  return 0;
}
int sumofn(int sum,int n)
{
    int i,num;
    for(i=1;i<=n;i++)
  {
    printf("Enter the number to be added: ");
    scanf("%d",&num);
    sum=sum+num;
  }
    return sum;
}
