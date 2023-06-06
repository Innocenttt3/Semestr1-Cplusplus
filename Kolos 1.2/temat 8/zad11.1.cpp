#include <iostream>
#include <cstring>
#include <ctime>
#include <cmath>
#include <algorithm>
using namespace std;

int* big_d(int* arr, int old_size, int new_size)
{
  int * arr_new = new int[new_size];
  for( int i = 0; i < old_size; i++)
  {
  arr_new[i] = arr[i];
  }
  if(new_size > old_size)
  {
    for(int i = 0; i < (new_size - old_size); i++)
    {
      arr_new[old_size + i] = 0;
    }
  }
  delete[] arr;
  for(int i = 0; i < new_size; i++)
  {
    cout << *(arr_new+i) << endl;
  }
  return arr_new;
}

int main()
{
  int old_size = 3;
  int new_size = 5;
  int* arr = new int[old_size];
  for(int i = 0; i < old_size; i++)
  {
    cin >> *(arr+i);
  }
  big_d(arr, old_size, new_size);
  
  return 0;
}