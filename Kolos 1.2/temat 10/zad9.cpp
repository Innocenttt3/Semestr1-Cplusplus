#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

int searcher(int numbers[], int size, int value)
{
  sort(numbers, numbers + size);
  for(int i = 0; i < size; i++)
  {
    if( numbers[i] == value) return i;
    else return -1;
  }
}


int main()
{
  int numbers[] = {1, 7, 5, 3, 2, 5};
  int value;
  cin >> value;
  int size = sizeof(numbers) / sizeof(*numbers);
  cout << searcher(numbers, size, value);
  

  return 0;
}