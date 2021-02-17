//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>
int main()
{
  int x1,x2,y1,y2,distance;
  printf("The Coordinates are inputted in the following order: x1, y1, x2, y2 \n");
  x1=input();
  y1=input();
  x2=input();
  y2=input();
  distance=distcal(x1,x2,y1,y2);
  output(x1,x2,y1,y2,distance);
  return 0;
}
int input()
{
  int a;
  printf("Enter the coordinate: ");
  scanf("%d",&a);
  return (a);
}
int distcal(int x1, int x2, int y1, int y2)
{
  int dist;
  dist=sqrt((pow(x2-x1,2))+(pow(y2-y1,2)));
  return (dist);
}
void output(int x1,int x2, int y1, int y2, int distance)
{
  printf("The distance between %d,%d and %d,%d is %d units", x1, y1, x2, y2, distance);
}
