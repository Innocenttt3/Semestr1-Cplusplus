#include <iostream>
#include <cmath>
using namespace std;

class Point
{
  private:
  float coordinate_x;
  float coordinate_y;

  public:
  void setcoordinate_x(float x)
  {
    coordinate_x = x;
  }
  float getcoordinate_x()
  {
    return coordinate_x;
  }

  void setcoordinate_y(float y)
  {
    coordinate_y = y;
  }
  float getcoordinate_y()
  {
    return coordinate_y;
  }
};

float distance_calc(float x1, float y1, float x2, float y2)
{
   return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

float lowest_distance(Point tab[], int size)
{
  float lowest_val = 100000;
  float temp_val;
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size; j++)
    {
      temp_val = distance_calc(tab[i].getcoordinate_x(), tab[i].getcoordinate_y(), tab[j].getcoordinate_x(), tab[j].getcoordinate_y());
      if ( temp_val < lowest_val && i != j)
      {
       lowest_val = temp_val;
      }
    }
  }
  return lowest_val;
}
int main() 
{
  Point point1;
  point1.setcoordinate_x(1);
  point1.setcoordinate_y(1);

  Point point2;
  point2.setcoordinate_x(4);
  point2.setcoordinate_y(5);

  Point point3;
  point3.setcoordinate_x(5);
  point3.setcoordinate_y(4);

  Point tab_of_points[3] = {point1, point2, point3};
  cout << lowest_distance(tab_of_points, 3);

	return 0;
}