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
float perimenter;
}
typedef Polygon;

int input_n()
{}

int input_polygon( int n, Polygon *p)
{}

Line input_line()
{}

void input_n_lines(int n, Line l[n])
{}

void find_perimeter(Polygon *p)
{}

void output(Polygon p)
{}

int main()
{}