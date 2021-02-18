//WAP to find the sum of n fractions.
#include<stdio.h>
struct fraction
{
  int n,d,final;
};
int main()
{
  struct fraction a,b,c,sum;
  int n,i,gcdmain;
  printf("The numbers are entered in this order, First fraction numerator and denominator, then second numerator and denominator after that extra numerator and denominator are added if the user has specified it.\n");
  printf("Enter the number of fractions to be added (minimum 2): ");
  scanf("%d",&n);
  n=n-2;
  a.n=input();
  a.d=input();
  b.n=input();
  b.d=input();
  sum.n=firstaddnum(a,b);
  sum.d=firstaddden(a,b);
  printf("Enter the next %d fractions by entering numerator and denominator, one after another: \n",n);
  for(i=0;i<n;i++)
  {
    c.n=input();
    c.d=input();
    sum.n=extraaddnum(c,sum);
    sum.d=extraaddden(c,sum);
  }
  gcdmain=simplify(sum);
  output(sum,gcdmain);
  return 0;
}
int input()
{
  int d;
  printf("Enter number: ");
  scanf("%d",&d);
  return (d);
}
int firstaddnum(struct fraction a, struct fraction b)
{
  int num;
  num=((a.n*b.d)+(b.n*a.d));
  return (num);
}
int firstaddden(struct fraction a, struct fraction b)
{
  int den;
  den=(a.d*b.d);
  return (den);
}
int extraaddnum(struct fraction c, struct fraction sum)
{
  int extranum;
  extranum=((c.n*sum.d)+(sum.n*c.d));
  return (extranum);
}
int extraaddden(struct fraction c, struct fraction sum)
{
  int extraden;
  extraden=(c.d*sum.d);
  return (extraden);
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
  printf("The sum is %d/%d", sum.n/gcdmain, sum.d/gcdmain);
}

