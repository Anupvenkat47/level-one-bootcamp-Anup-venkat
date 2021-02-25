#include<stdio.h>
#include<math.h>
struct points
{
    float x,y;
};
float input();
float distcal();
void output(struct points a,struct points b, float distance);
int main()
{
  struct points a,b;
  float distance;
  printf("The Coordinates are inputted in the following order: x1, y1, x2, y2 \n");
  a.x=input();
  a.y=input();
  b.x=input();
  b.y=input();
  distance=distcal(a,b);
  output(a,b,distance);
  return 0;
}
float input()
{
  float c;
  printf("Enter the coordinate: ");
  scanf("%f",&c);
  return (c);
}
float distcal(struct points a, struct points b)
{
  float dist;
  dist=sqrt((pow(b.x-a.x,2))+(pow(b.y-a.y,2)));
  return (dist);
}
void output(struct points a,struct points b, float distance)
{
  printf("The distance between %f,%f and %f,%f is %f units", a.x, a.y, b.x, b.y, distance);
}
