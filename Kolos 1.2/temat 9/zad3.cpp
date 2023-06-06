#include <iostream>
#include <cstring>
#include <ctime>
#include <cmath>
#include <algorithm>
using namespace std;

int exist01(int** arr, int size1, int size2)
{
  for(int y = 0; y < size2; y++) 
  {
    if(arr[0][y] != 0 || arr[size1 - 1][y] != 0) 
    return 1; 
  }
  for(int i = 0; i < size1; i++)
  {
    if(arr[i][0] != 0 || arr[i][size2 - 1] != 0) 
    return 1;
  }  
  return 0;  
}

int main()
{
  int size1;
  int size2;
  cin >> size1;
  cin >> size2;
  int** arr = new int*[size1];
  for(int i = 0; i < size1; i++)
  {
    arr[i] = new int[size2];
  }
  for(int i = 0; i < size1; i++)
  {
    for(int y = 0; y < size1; y++)
    {
      arr[i][y] = 2;
    }
  }
  cout << exist01(arr, size1, size2);
  for(int i = 0; i < size1; i++)
  {
    delete[] arr[i];
  }
  delete[] arr;

  return 0;
}