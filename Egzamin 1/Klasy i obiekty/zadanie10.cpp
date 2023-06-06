#include <iostream>
#include <cmath>
#include <ctime>
#include <algorithm>
#include <cstdlib>
using namespace std;

class vec2d
{
  private:
  float x;
  float y;

  public:
  vec2d()
  {
    x = (float)(rand()%201 - 101) / 100;
    y = x * (-1);
  }

  void set_x(float value)
  {
    x = value;
  }
  float get_x()
  {
    return x;
  }

  void set_y(float value)
  {
    y = value;
  }
  float get_y()
  {
    return y;
  }
};
void cout_function(vec2d &vector)
{
  cout << vector.get_x() << " ";
  cout << vector.get_y();
  cout << endl;
}
bool value_compare(vec2d &vector1, vec2d &vector2)
{
  return vector1.get_y() > vector2.get_y();
}
bool value_compare_to_min(vec2d &vector1, vec2d &vector2)
{
  return vector1.get_x() < vector2.get_x();
}
int main() 
{
  srand(time(NULL));
  vec2d tab[3];
  for ( int i = 0; i < 3; i++)
  {
    vec2d vector1;
    tab[i] = vector1;
  }
  for_each(tab, tab+3, cout_function);
  cout << endl;
  sort(tab, tab+3, value_compare);
  for_each(tab, tab+3, cout_function);
  cout << endl;
  vec2d *min;
  min =  min_element(tab, tab+3, value_compare_to_min);
  cout << min->get_x() <<" "<< min->get_y();
 
	return 0;
}


