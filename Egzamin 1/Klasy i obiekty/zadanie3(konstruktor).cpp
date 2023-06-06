#include <iostream>
#include <cmath>
using namespace std;



class Point 
{
  private:
    float coor_x;
    float coor_y;
	float coor_z;

  public:
	Point(float x, float y ,float z)
	{
		coor_x = x;
		coor_y = y;
		coor_z = z;
	}
	Point(float x, float y)
	{
		coor_x = x;
		coor_y = y;
		cout << "version with x,y";
	}
	Point(float x)
	{
		coor_x = x;
		cout << "version with x";
	}

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

	void setCoor_z(float z) 
    {
      coor_z = z;
    }
    float getCoor_z() 
    {
    return coor_z;
    }

};
void copy_machine(Point arr1[], Point arr2[], int size)
{
    for(int i = 0; i < size; i++)
    {
        arr2[i] = arr1[i];  
    }
}

void fill()
{

	
	int size = 0;
	cin >> size;
	float x, y, z;
	Point *arr = new Point[size];
	for( int i = 0; i < size; i++)
	{
		cin >> x >> y >> z;
		Point point(x, y);
		arr[i] = point;
	}
	Point *arr2 = new Point[size];
	copy_machine(arr, arr2, size);
	delete[] arr;
	cout << arr2[0].getCoor_x() << " " << arr2[0].getCoor_y() << " " << arr2[0].getCoor_z() << endl;
	delete[] arr2;
}
int main() 
{
	fill();
	return 0;
}