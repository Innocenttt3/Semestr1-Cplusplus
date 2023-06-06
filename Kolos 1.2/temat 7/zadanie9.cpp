#include <iostream>
using namespace std;

void tabel(int* pointer_start, int* pointer_end)
{
  for(int* i = pointer_start; i < pointer_end; i++)
  {
    cout << *i << endl;
  }
}

int main() 
{
  int arr[5] = {1, 2, 3, 4, 5};
  tabel(arr, &arr[5]);
  
  

  return 0;
}