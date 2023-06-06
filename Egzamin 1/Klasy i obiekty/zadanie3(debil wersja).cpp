#include <iostream>
#include <cmath>
using namespace std;



class Point 
{   
  public:
	float coor_x;
    float coor_y;
    // void setCoor_x(float x) 
    // {
    //   coor_x = x;
    // }
    // float getCoor_x() 
    // {
    // return coor_x;
    // }

    // void setCoor_y(float y) 
    // {
    //   coor_y = y;
    // }
    // float getCoor_y() 
    // {
    // return coor_y;
    // }

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
//   Point point;
//   point.coor_x = 1.1;
//   point.coor_y = 2.1;
//   Point points1[2] = {point};
//   cout << points1[0].coor_x <<" "<<  points1[0].coor_y;
	Point tab[2] = {{1.1, 2.1},{1.2, 2.2}};
	cout << tab[1].coor_y;
    
    return 0;
}