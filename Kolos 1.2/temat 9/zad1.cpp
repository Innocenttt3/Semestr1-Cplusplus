#include <iostream>
#include <cstring>
#include <ctime>
#include <cmath>
#include <algorithm>
using namespace std;



int main()
{
  int size1;
  int size2;
  int size3;
  cin >> size1;
  cin >> size2;
  cin >> size3;
  int*** arr = new int**[size1];
  for(int i = 0; i < size1; i++)
  {
    arr[i] = new int*[size2];
    for(int y = 0; y < size1; y++)
    {
      arr[i][y] = new int[size3];
    }
  }

  for(int i = 0; i < size1; i++)
  {
    for(int y = 0; y < size1; y++)
    {
      for(int k = 0; k < size1; k++)
      {
        arr[i][y][k] = i + y + k;
      }
    }
  }
  for(int i = 0; i < size1; i++)
  {
    for(int y = 0; y < size1; y++)
    {
      delete[] arr[i][y];
    }
    delete[] arr[i];
  }
  delete[] arr;
  
  return 0;
}