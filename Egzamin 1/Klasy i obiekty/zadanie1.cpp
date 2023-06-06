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

float modulo_calc(float x1, float y1, float x2, float y2)
{
    float x;
    float y;
    float result;
    x = pow((x1 - x2),2);
    y = pow((y1 - y2),2);
    result = sqrt(x + y);
    return result;
    
}
void take_info()
{
    float x1, y1, x2, y2;
    cout << "wstaw wspolrzedne  1 punktu: " << endl;
    cout << "x-> ";
    cin >> x1;
    cout << "y-> ";
    cin >> y1;
    Point new_inf;
    new_inf.setCoor_x(x1);
    new_inf.setCoor_y(y1);

    cout << "wstaw wspolrzedne  2 punktu: " << endl;
    cout << "x-> ";
    cin >> x2;
    cout << "y-> ";
    cin >> y2;
    Point new_inf_2;
    new_inf_2.setCoor_x(x2);
    new_inf_2.setCoor_y(y2);

     cout << modulo_calc(new_inf.getCoor_x(), new_inf.getCoor_y(), new_inf_2.getCoor_x(), new_inf_2.getCoor_y());
}

int main() 
{
    take_info();
    
    
    return 0;
}