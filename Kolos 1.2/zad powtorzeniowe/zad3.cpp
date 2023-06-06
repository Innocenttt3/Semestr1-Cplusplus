#include <iostream>
#include <cmath>
using namespace std;

float vector_length(float x, float y)
{
  float result = 0;
  result = sqrt(pow(x, 2) + pow(y, 2));
  return result;
}
void arr_fun(float* vectors2d, float* last_element, float* results, float(*ptr)(float, float))
{
  for (int i = 0; i < (last_element - vectors2d); i += 2)
  {
    results[i/2]  = ptr(vectors2d[i], vectors2d[i+1]);
  }
}
int main() 
{  
  int size = 8;
  float* vectors2d = new float[size];
  float* results = new float[size / 2];
  vectors2d[0] = 1.0;
  vectors2d[1] = 1.0;
  vectors2d[2] = 2.0;
  vectors2d[3] = 1.0;
  vectors2d[4] = 1.0;
  vectors2d[5] = 3.0;
  vectors2d[6] = 3.0;
  vectors2d[7] = 1.0;

  float* last_element = (vectors2d + size); 
  float(*ptr_vector_length)(float, float);
  ptr_vector_length = vector_length;
  arr_fun(vectors2d, last_element, results, ptr_vector_length);
  for ( int i = 0; i < size / 2; i++)
  {
    cout << results[i] << endl;
  }


  delete[] results;
  delete[] vectors2d;

return 0;
}


