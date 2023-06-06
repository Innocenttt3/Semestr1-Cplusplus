#include <iostream>
#include <cmath>
using namespace std;

void sum_rows(float** arr2d, int* info, float* results, int size)
{
  float temp_result = 0;
  float temp_single_value = 0;
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < info[i]; j++)
    {
      temp_single_value = arr2d[i][j];
      temp_result += temp_single_value;
      
    }
    results[i] = temp_result;
    temp_result = 0;
    temp_single_value = 0;
  }
 
}

int main() 
{  
  float licznik = 1.1;
  int size = 4;
  int* info = new int[size];
  for (int i = 0; i < size; i++)
  {
    cin >> info[i];
  }
  for (int i = 0; i < size; i++)
  {
    cout <<  info[i] << endl;
  }
  float** arr2d = new float*[size];
  for (int i = 0; i < size; i++)
  {
    arr2d[i] = new float[info[i]];
  }
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < info[i]; j++)
    {
      arr2d[i][j] = licznik;
      licznik++;
    }
  }
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < info[i]; j++)
    {
      cout << arr2d[i][j] << " ";
    }
    cout << endl;
  }
  cout << "-------------" << endl;
  float* results = new float[size];
  sum_rows(arr2d, info, results, size);
  for (int i = 0; i < size; i++)
  {
    cout << results[i] << endl;
  }
  
  for (int i = 0; i < size; i++)
  {
    delete[] arr2d[i];
  }
  delete[] arr2d;
  delete[] info;
  delete[] results;

return 0;
}


