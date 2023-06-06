#include <iostream>
#include <cmath>
using namespace std;



class Point 
{
  private:
    float coor_x;
    float coor_y;

  public:

    void setCoor_x(float x) 
    {
      coor_x = x;
    }
    float getCoor_x() 
    {
    return coor_x;
    }

    void setCoor_y(float y) 
    {
      coor_y = y;
    }
    float getCoor_y() 
    {
    return coor_y;
    }

};
void copy_machine(Point arr1[], Point arr2[], int size)
{
    for(int i = 0; i < size; i++)
    {
        arr2[i] = arr1[i];
        
    }
}

int main() 
{
  Point point;
  point.setCoor_x(1.1);
  point.setCoor_y(2.1);
  Point point2;
  point2.setCoor_x(1.2);
  point2.setCoor_y(2.2);
  Point points1[2] = {point, point2};
  int size = sizeof(points1);
  cout << size;
  // cout << points1[1].getCoor_x() << points1[1].getCoor_y();
    
    return 0;
}