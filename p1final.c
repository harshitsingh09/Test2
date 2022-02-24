#include <stdio.h>
#include <math.h>

void input(float *x1, float *y1, float *x2, float *y2)
{
  printf("Enter the values of the first Coordinates:\n");
  scanf("%f %f", x1, y1);
  printf("Enter the values of the second coordinate:\n");
  scanf("%f %f", x2, y2);
}

void find_dist(float x1, float y1, float x2, float y2, float *dist)
{float x3, y3, z;
  x3 = (x2-x1)*(x2-x1);
  y3 = (y2-y1)*(y2-y1);
  z = y3 + x3;
  //ENTERING SQRT FUNC. BELOW
  *dist = sqrt(z);
}

void output(float x1, float y1,float x2, float y2, float dist)
{
  printf("The distance between the points (%.2f,%.2f) & (%.2f,%.2f) is %f",x1, y1, x2, y2, dist);
}

int main()
{
  float x1, x2, y1, y2, dist;
  input(&x1, &y1, &x2, &y2);
  find_dist(x1, y1, x2, y2, &dist);
  output(x1, y1, x2, y2, dist);
  return 0;
}