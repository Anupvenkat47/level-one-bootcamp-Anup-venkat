//WAP to find the sum of two fractions.
#include<stdio.h>
struct fraction
{
  int n,d;
};
int main()
{
  struct fraction a,b,sum;
  printf("The numbers are entered in this order, First fraction numerator and denominator, then second numerator and denominator.\n");
  a.n=input();
  a.d=input();
  b.n=input();
  b.d=input();
  sum.n=addnum(a,b);
  sum.d=addden(a,b);
  output(sum);
}
int input()
{
  int c;
  printf("Enter number: ");
  scanf("%d", &c);
  return (c);
}
int addnum(struct fraction a, struct fraction b)
{
  int num;
  num=((a.n*b.d)+(b.n*a.d));
  return (num);
}
int addden(struct fraction a, struct fraction b)
{
  int den;
  den=(a.d*b.d);
  return (den);
}
void output(struct fraction sum)
{
  printf("The sum is %d/%d", sum.n,sum.d);
}
