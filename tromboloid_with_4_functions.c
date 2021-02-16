//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
int main()
{
  int h,d,b;
  int vol;
  h=input();
  d=input();
  b=input();
  vol=volume(h,d,b);
  output(vol);
  return 0;
}
int input()
{
  int c;
  printf("Enter the number: ");
  scanf("%d",&c);
  return (c);
}
int volume(int h,int d,int b)
{
  int funvol;
  funvol=((0.333)*((h*d*b)+(d/b)));
  return (funvol);
}
void output(int vol)
{
  printf("The volume of tromboloid is %d units.",vol);
}
