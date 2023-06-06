#include <iostream>
#include <cmath>
using namespace std;

int* where_is(int** arr_tri, int size, int size_single, int x, int y)
{
  if( x < 0 || y < 0 || x > size - 1 || y > size - 1 || x < y)
  return nullptr;
  else
  return &arr_tri[y][x];
}

int main() 
{  
  int x = 2;
  int y = 1;
  int licznik = 0;
  int size;
  cin >> size;
  int** arr_tri = new int*[size];
  for(int i = 0; i < size; i++)
  {
    arr_tri[i] = new int[size - i];
  }

  for(int i = 0; i < size; i++)
  {
    for(int j = 0; j < size - i; j++)
    {
      *(*(arr_tri+i)+j) = licznik;
      cout << *(*(arr_tri+i)+j) << " ";
      licznik++;
    }
    cout << endl;
  }
  cout << "--------------" << endl;
  int size_single = sizeof(arr_tri[0]);
  int *result = where_is(arr_tri, size, size_single, x, y);
  cout << *result;



 for(int i = 0; i < size; i++)
  {
    delete[] arr_tri[i];
  }
  delete[] arr_tri;

return 0;
}


