#include <iostream>
#include <cstring>
#include <ctime>
#include <cmath>
#include <algorithm>
using namespace std;

int max_value(int n, int m, int o)
{
  if(n >= m && n >= o) return n;
  else if(m >= n && m >= o) return m;
  else if(o >= m && o >= n) return o;
}
int min_value(int n, int m, int o)
{
  if(n <= m && n <= o) return n;
  else if(m <= n && m <= o) return m;
  else if(o <= m && o <= n) return o;
}
int mid_value(int num1, int num2, int num3)
{
  if(num2>num1 && num1>num3 || num3>num1 && num1>num2) return num1;
  else if(num1>num2 && num1>num3 || num3>num2 && num2>num1) return num2;
  else if(num1>num3 && num3>num2 || num2>num3 && num3>num1) return num3;
}
int randomisor()
{
  int value = rand() % 6;
  return value;
}
int main()
{
  srand(time(NULL));
  int n;
  int m;
  int o;
  cin >> n >> m >> o;
  int* arr_n = new int[n];
  int* arr_m = new int[m];
  int* arr_o = new int[o];
  for(int i = 0; i < n; i++)
  {
    arr_n[i] = randomisor();
  }
  for(int i = 0; i < m; i++)
  {
    arr_m[i] = randomisor();
  }
  for(int i = 0; i < o; i++)
  {
    arr_o[i] = randomisor();
  }
  sort(arr_n, arr_n + n);
  sort(arr_m, arr_m + m);
  sort(arr_o, arr_o + o);

  for(int i = 0; i < n; i++)
  {
    cout << arr_n[i];
  }
  cout << endl;
  cout << "--------" << endl;

  for(int i = 0; i < m; i++)
  {
    cout << arr_m[i];
  }
  cout << endl;
  cout << "--------" << endl;
  for(int i = 0; i < o; i++)
  {
    cout << arr_o[i];
  }
  cout << endl;
  cout << "--------" << endl;

  for(int i = 0; i < max_value(n, m, o); i++)
  {
    for(int j = 0; j < mid_value(n, m, o); j++)
    {
      for(int y = 0; y < min_value(n, m, o); y++)
      {
        if(arr_n[i] == arr_m[j] && arr_m[j] == arr_o[y] && arr_o[y] == arr_n[i]) cout << arr_n[i] << endl; //dokonczyc warunki
      }
    }
  }
  
  delete[] arr_n;
  delete[] arr_m;
  delete[] arr_o;
  return 0;
}