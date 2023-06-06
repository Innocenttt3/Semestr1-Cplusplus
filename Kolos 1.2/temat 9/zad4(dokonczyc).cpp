#include <iostream>
#include <cstring>
#include <ctime>
#include <cmath>
#include <algorithm>
using namespace std;

void transition(int** arr, int rows, int columns)
{
    int new_rows = columns;
    int new_columns = rows;

  int** copy = new int*[new_rows];
  for(int i = 0; i < new_rows; i++)
  {
    copy[i] = new int[columns];
  }
  for(int i = 0; i < new_rows; i++)
  {
    for(int y = 0; y < new_columns; y++)
    {
    copy[i][y] = arr[y][i];
    cout << copy[i][y] << " ";
    }
    cout << endl;
  }

 
  
}

int main()
{
  int rows;
  int columns;
  cout << "rows: " << endl;
  cin >> rows;
  cout << "columns: " << endl;
  cin >> columns;

  int** arr = new int*[rows];
  for(int i = 0; i < rows; i++)
  {
    arr[i] = new int[columns];
  }

  for(int i = 0; i < rows; i++)
  {
    for(int y = 0; y < columns; y++)
    {
      cin >> arr[i][y];
    }
  }

  for(int i = 0; i < rows; i++)
  {
    for(int y = 0; y < columns; y++)
    {
      cout << arr[i][y] << " ";
    }
    cout << endl;
  }
  cout <<"-------------------------" << endl;

  transition(arr, rows, columns);
  // for(int i = 0; i < rows; i++)
  // {
  //   for(int y = 0; y < columns; y++)
  //   {
  //     cout << arr[i][y] << " ";
  //   }
  //   cout << endl;
  // }
  // for(int i = 0; i < rows; i++)
  // {
  //   delete[] arr[i];
  // }
  // delete[] arr;
  return 0;
}