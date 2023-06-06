#include <iostream>
#include <cstring>
using namespace std;

void task(float arr[], int size, float min, float max, int* n_out)
{
  int length = 0;
  for(int i = 0; i < size; i++)
  {
    if(arr[i] >= (float)min && arr[i] < (float)max)
    {
      length++;
    } 
  }
  *n_out = length;
  float* final_arr = new float[length];
  length = 0;
  for(int j = 0; j < size; j++)
  {
    if(arr[j] >= (float)min && arr[j] < (float)max)
    {
    final_arr[length] = arr[j];
    length++;
    } 
  }
  for(int y = 0; y < length; y++)
  {
    cout << final_arr[y] << endl;
  }
delete[] final_arr;
final_arr = nullptr;
}
int main() 
{
  int size = 5;
  float arr[5] = {1.5, 2.5, 3.5, 4.5, 5};
  float min = 2;
  float max = 4;
  int* n_out;
  task(arr, size, min, max, n_out);
  
  return 0;
}