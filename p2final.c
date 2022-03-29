#include <stdio.h>
#include <math.h>

void input_line(float *x1, float *y1, float *x2, float *y2,float *x3, float *y3)
{
  printf("Enter the values of the first Coordinates:\n");
  scanf("%f %f", x1, y1);
  printf("Enter the values of the second Coordinates:\n");
  scanf("%f %f", x2, y2);
  printf("Enter the values of the third Coordinates:\n");
  scanf("%f %f", x3, y3);
}

int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
  float s1, s2, s3;
  s1 = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
  s2 = sqrt(((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2)));
  s3 = sqrt(((x1-x3)*(x1-x3))+((y1-y3)*(y1-y3)));
  if(s1+s2>s3 && s2+s3>s1 && s1+s3>s2)
    return 0;
  else
    return 1;
}

void output(float x1, float y1, float x2, float y2,float x3, float y3, int istriangle)
{
  if (istriangle == 0)
  printf("The lines from the points (%f,%f), (%f,%f) & (%f,%f) IS a Triangle.\n",x1, y1, x2, y2, x3, y3);
  else
    printf("The lines from the points (%f,%f), (%f,%f) & (%f,%f) is NOT a triangle.\n",x1, y1, x2, y2, x3, y3);
}

int main()
{
  float x1, y1, x2, y2, x3, y3;
  input_line(&x1, &y1, &x2, &y2, &x3, &y3);
  int istriangle = is_triangle(x1, y1, x2, y2, x3, y3);
  output(x1, y1, x2, y2, x3, y3, istriangle);
  return 0;
}