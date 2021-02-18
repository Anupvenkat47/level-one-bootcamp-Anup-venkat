//WAP to find the sum of two fractions.
#include<stdio.h>
struct fraction
{
  int n,d;
};
int main()
{
  struct fraction a,b,sum;
  int gcdmain;
  printf("The numbers are entered in this order, First fraction numerator and denominator, then second numerator and denominator.\n");
  a.n=input();
  a.d=input();
  b.n=input();
  b.d=input();
  sum.n=addnum(a,b);
  sum.d=addden(a,b);
  gcdmain=simplify(sum);
  output(sum,gcdmain);
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
int simplify(struct fraction sum)
{
    int gcd,i;
    for(i=1; i <= sum.n && i <= sum.d; ++i)
    {
    if(sum.n%i==0 && sum.d%i==0)
        gcd = i;
    }
    return gcd;
}
void output(struct fraction sum,int gcdmain)
{
  printf("The sum is %d/%d", sum.n/gcdmain,sum.d/gcdmain);
}
