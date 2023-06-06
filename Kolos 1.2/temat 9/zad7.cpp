#include <iostream>
#include <cstring>
#include <ctime>
#include <cmath>
#include <algorithm>
using namespace std;


void print_matrix(int** arr, int rows, int clmns)
{
  for(int i = 0; i < rows; i++)
  {
    for(int y = 0; y < clmns; y++)
    {
      cout << arr[i][y];
    }
    cout << endl;
  }
}
void mul(int** arr1, int** arr2, int rows1, int rows2, int clmns1, int clmns2)
{
  if( rows1 != clmns2 || rows2 != clmns1) cout << "zle macierze";
  else
  {
    int** results = new int*[rows2];
    for(int i = 0; i < rows2; i++)
    {
      results[i] = new int[clmns1];
    }
  }
}


int main()
{
  int rows;
  int clmns;
  cin >> rows;
  cin >> clmns;

  int** arr = new int*[rows];
  for (int i = 0; i < rows; i++)
  {
    arr[i] = new int[clmns];
  }
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < clmns; j++)
    {
    cin >> arr[i][j];
    }
  }

  

  return 0;
}





