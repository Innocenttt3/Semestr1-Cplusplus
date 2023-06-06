#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

unsigned int randomisor()
{
  unsigned int result = 0;
  result = rand() % 10;
  return result;
}
float convert_machine(unsigned int value1, unsigned int value2)
{
  float temp_value1 = 0.0;
  float temp_value2 = 0.0;
  float result = 0.0;
  temp_value1 = (float)value1;
  temp_value2 = (float)value2;
  if(value1 >= value2)
  {
    temp_value1 /= 10;
    result = temp_value1 + temp_value2;
  }
  else
  {
    temp_value2 /= 10;
    result = temp_value1 + temp_value2;
  }
  return result;
}
void killer(unsigned int** arr2d, float** arr2d_2, int n, int m, float(*pointer)(unsigned int, unsigned int))
{
  for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < (m * 3); j+=2)
      {
        arr2d_2[i][j/2] = pointer(arr2d[i][j], arr2d[i][j+1]);
      }
    }
}


int main() 
{  
  srand(time(NULL));
  int n;
  int m;
  cin >> n;
  cin >> m;
  int size_m = 2 * m;
  unsigned int** arr2d = new unsigned int*[n];
  for (int i = 0; i < n; i++)
  {
    arr2d[i] = new unsigned int[size_m];
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < size_m; j++)
    {
      arr2d[i][j] = randomisor();
      cout << arr2d[i][j] << " ";
    }
    cout << endl;
  }
  cout << "--------" << endl;

  float(*pointer)(unsigned int, unsigned int);
  pointer = convert_machine;

  float** arr2d_2 = new float*[n];
  for (int i = 0; i < n; i++)
  {
    arr2d_2[i] = new float[m];
  }
  killer(arr2d, arr2d_2, n, m, pointer);
  for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        cout << arr2d_2[i][j] << " ";
      }
      cout << endl;
    }


return 0;
}


