#include<stdio.h>

struct _point
{
float x,y;
}
typedef Point;

struct _line
{
Point p1,p2;
float distance;
}
typedef Line;

struct _polygon
{
int n;
Line l[100];
float perimeter;
}
typedef Polygon;

int input_n()
{
  int n;
  printf("Enter the number of sides in the Polygon:\n");
  scanf("%d", &n);
  return n;
}

int input_polygon( int n, Polygon *p)
{
  *p.n = n;
}

Point input_coordinates()
{
  Point p;
  printf("Enter the x coordinate:\n");
  scanf("%d", &p.x);
  printf("Enter the y coordinate:\n");
  scanf("%d", &p.y);
  return p;
}

Line input_line()
{
  scanf("%")
}

void input_n_lines(int n, Line l[n])
{
  for(int i = 0; i<n; i++)
    {
      scanf("%d", l[i].p1);
      scanf("%d", l[i].p2);
    }
}

void find_perimeter(Polygon *p)
{
  *p.distance = 0;
  for(int i; i<n; i++)
    {
      sum = sum + l[i].distance;
    }
  
}

void output(Polygon p)
{
  printf("");
}

int main()
{
  int n = input_n();
  
  output(p)
  return 0;
}