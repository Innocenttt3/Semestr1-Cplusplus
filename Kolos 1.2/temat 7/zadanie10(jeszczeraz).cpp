#include <iostream>
using namespace std;

void tabel(int* start, int size)
{
  int *end = start + size - 1;
  for(int i = 0; i < size/4; i++)
  {
  int temp = *(start + i);
  *(start + i) = *(end - i);
  *(end - i) = temp;
  }
  
  

  
  

}
int main() 
{
  int arr[] = {1, 2, 3, 4, 5};
  int size = sizeof(arr);
  tabel(arr, size);
  for(int i = 0; i < size; i++)
  {
  cout << arr[i] << endl;
  }
  
  
  

  return 0;
}