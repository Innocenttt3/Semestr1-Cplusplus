#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

class Complex
{
  private:
  double im;
  double re;

  public:

  void set_im(double value)
  {
    im = value;
  }
  double get_im()
  {
    return im;
  }

  void set_re(double value)
  {
    re = value;
  }
  double get_re()
  {
    return re;
  }
  double abs()
  {
    return sqrt(pow(im,2) + pow(re,2));
  }
};

double add(Complex *value1, Complex *value2)
{
  return value1->abs() + value2->abs();
}
int main() 
{
  Complex *value1 = new Complex;
  value1->set_im(3);
  value1->set_re(4);

  Complex *value2 = new Complex;
  value2->set_im(3);
  value2->set_re(4);
  
  cout << add(value1, value2);

	return 0;
}


