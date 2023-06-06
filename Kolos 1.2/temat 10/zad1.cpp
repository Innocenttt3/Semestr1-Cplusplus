#include <iostream>
#include <cstring>
#include <ctime>
using namespace std;

float sum(float x, float y)
{
  return x + y;
}
float sub(float x, float y)
{
  return x - y;
}
float multi(float x, float y)
{
  return x * y;
}
float div(float x, float y)
{
  return x / y;
}
int main()
{
  float x;
  float y;
  unsigned int z;
  cin >> z >> x >> y;
  float(*ptr_to_fun[4])(float, float);
  ptr_to_fun[0] = sum;
  ptr_to_fun[1] = sub;
  ptr_to_fun[2] = multi;
  ptr_to_fun[3] = div;
  cout << "wynik: " << ptr_to_fun[z](x, y) << endl;


  return 0;
}