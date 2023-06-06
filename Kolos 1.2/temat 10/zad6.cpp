#include <iostream>
#include <algorithm>
using namespace std;

int compare_ints(const void* a, const void* b)
{
  int x = *(const int*)a;
  int y = *(const int*)b;
  if (x > y) return -1;
  if (x < y) return 1;
    return 0;
}

int compare_floats(const void* a, const void* b)
{
  float x = *(const float*)a;
  float y = *(const float*)b;
  if (x > y) return -1;
  if (x < y) return 1;
    return 0;
}

int main()
{
  int arr1[5] = {1,5,2,4,3};
  float arr3[6] = {1.3, 2.5, 1.1, 8.9, 7.0, 2.1};
  int arr2[10] = {1, 9, 6, 3, 5, 8, 10, 11, 2, 4};

  int size =  sizeof(arr1) / sizeof(*arr1);
  qsort(arr1, size, sizeof(int), compare_ints);
  for(int i = 0; i < size; i++)
  {
    cout << arr1[i] << " ";
  }

  cout << endl;
  cout << "------------------" << endl;

  int size_floats =  sizeof(arr3) / sizeof(*arr3);
  qsort(arr3, size_floats, sizeof(float), compare_floats);
  for(int i = 0; i < size_floats; i++)
  {
    cout << arr3[i] << " ";
  }
  cout << endl;
  cout << "------------------" << endl;
  int size2 = sizeof(arr2) / sizeof(*arr2);
  sort(arr2, arr2 + size2, greater<int>());
  for(int i = 0; i < size2; i++)
  {
    cout << arr2[i] << " ";
  }
  return 0;
}