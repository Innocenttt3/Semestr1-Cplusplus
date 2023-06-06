#include <iostream>
#include <cstring>
#include <ctime>
#include <cmath>
using namespace std;

void rand_gen(float arr[], int size)
{
  for(int i  = 0; i < size; i++) arr[i] = rand() % 10;
}
void seq(float arr[], int size)
{
  float f[size];
  f[0] = 0;
  for(int i = 0; i < size; i++)
  {
    f[i] = pow((-1), i) * arr[i-1] + f[i-1];
    cout << f[i] << " " << i << endl;
  }
}

int main() 
{
  srand(time(NULL));
  int size;
  cin >> size;
  float* arr = new float[size];
  rand_gen(arr, size);
  seq(arr, size);
  delete[] arr;
  arr = nullptr;


  
  return 0;
}