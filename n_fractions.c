//WAP to find the sum of n fractions.
#include<stdio.h>
struct fraction
{
  int n,d,final;
};
int initialinput();
int addtionalfractionn(struct fraction c,struct fraction sum,int number);
int addtionalfractiond(struct fraction c,struct fraction sum,int number);
int input();
int firstaddnum(struct fraction a, struct fraction b);
int firstaddden(struct fraction a, struct fraction b);
int simplify(struct fraction sum);
void output(struct fraction sum,int gcdmain);
int main()
{
  struct fraction a,b,c,sum;
  int number,gcdmain;
  number=initialinput();
  a.n=input();
  a.d=input();
  b.n=input();
  b.d=input();
  sum.n=firstaddnum(a,b);
  sum.d=firstaddden(a,b);
  sum.n=addtionalfractionn(c,sum,number);
  sum.d=addtionalfractiond(c,sum,number);
  gcdmain=simplify(sum);
  output(sum,gcdmain);
  return 0;
}
int initialinput()
{
  int n;
  printf("The numbers are entered in this order, First fraction numerator and denominator, then second numerator and denominator after that extra numerator and denominator are added if the user has specified it.\n");
  printf("Enter the number of fractions to be added (minimum 2): ");
  scanf("%d",&n);
  return(n-2);
}
int addtionalfractionn(struct fraction c,struct fraction sum,int number)
{
    printf("Enter the next %d numerator and denominator , one after another: \n",number);
    int i,an;
    for(i=0;i<number;i++)
  {
    c.n=input();
    c.d=input();
    an=((c.n*sum.d)+(sum.n*c.d));
  }
  return (an);
}
int addtionalfractiond(struct fraction c,struct fraction sum,int number)
{
    printf("Enter the same %d numerators and denominators, one after another: \n",number);
    int i,ad;
    for(i=0;i<number;i++)
  {
    c.n=input();
    c.d=input();
    ad=(c.d*sum.d);
  }
  return (ad);
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
