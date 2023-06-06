#include <iostream>
#include <cstring>
#include <ctime>
#include <cmath>
#include <algorithm>
using namespace std;

int randomisor()
{
  int value = rand() % 101 - 50;
  return value;
}
void pair_finder(int arr[],int size, int m)
{
  int counter_of_pairs = 0;
  int prev_i = 0;
  int prev_j = 0;
  for(int i = 0; i < size; i++)
  {
      for(int j = 0; j < size; j++)
      {
        if(arr[i] != arr[j] && (arr[i] + arr[j]) == m && arr[i] != prev_j && arr[j] != prev_i)
        {
          cout << "suma: " << arr[i] << " + " << arr[j] << " = " << m << endl;
          prev_i = arr[i];
          prev_j = arr[j];
          counter_of_pairs++;
        }
      }
  }
  cout << counter_of_pairs << endl;
}
int main() 
{
  srand(time(NULL));
  int n;
  int m;
  cin >> n;   
  cin >> m;
  int* arr = new int[n];
  for(int i = 0; i < n; i++) arr[i] = randomisor();
  sort(arr, arr+n);
  for(int i = 0; i < n; i++) cout << arr[i] << endl;
  cout << "---------------" << endl;
  pair_finder(arr, n, m);
  delete[] arr;
  return 0;
}