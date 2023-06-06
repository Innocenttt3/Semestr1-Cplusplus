#include <algorithm>
#include <iostream>
#include <cstdlib>
using namespace std;

void formula1(int* arr, int size_arr, int k, int* results)
{
    int *temp = new int[size_arr];
    for (int i = 0; i < size_arr; i++) 
    {
    temp[i] = arr[i];
    }
    
    sort(temp, temp + size_arr, greater<int>());
    for (int i = 0; i < k; i++) 
    {
      results[i] = temp[i];
    }
    delete[] temp;
    temp = nullptr;
}

int main() 
{
  int k;
  int arr[] = {1, 5, 3, 2, 7};
  cin >> k;
  int size_arr = sizeof(arr) / sizeof(*arr);
  int results[k];
  formula1(arr, size_arr, k, results);
  for(int i = 0; i < k; i++)
  {
    cout << results[i] << " ";
  }

    return 0;
}









