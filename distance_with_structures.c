//WAP to find the distance between two points using structures and 4 functions.
#include<stdio.h>
#include<math.h>
struct points
{
    int x,y;
};
int main()
{
  struct points a,b;
  int distance;
  printf("The Coordinates are inputted in the following order: x1, y1, x2, y2 \n");
  a.x=input();
  a.y=input();
  b.x=input();
  b.y=input();
  distance=distcal(a,b);
  output(a,b,distance);
  return 0;
}
int input()
{
  int c;
  printf("Enter the coordinate: ");
  scanf("%d",&c);
  return (c);
}
int distcal(struct points a, struct points b)
{
  int dist;
  dist=sqrt((pow(b.x-a.x,2))+(pow(b.y-a.y,2)));
  return (dist);
}
void output(struct points a, struct points b, int distance)
{
  printf("The distance between %d,%d and %d,%d is %d units", a.x, a.y, b.x, b.y, distance);
}
