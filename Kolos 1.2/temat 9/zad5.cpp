#include <iostream>
#include <cstring>
#include <ctime>
#include <cmath>
#include <algorithm>
using namespace std;

void move_rows(int** arr, int rows, int clmns)
{
  int** temp = new int*[rows];
  for(int i = 0; i < rows; i++)
  {
    temp[i] = new int[clmns];
  }
  temp[0] = arr[rows - 1];
  for(int i = 1; i < rows; i++)
  {
    temp[i] = arr[i-1];
  }
  for(int i = 0; i < rows; i++)
  {
    for(int j = 0; j < clmns; j++)
    {
      cout <<  temp[i][j]; 
    }
    cout << endl;
  }
  for(int i = 0; i < rows; i++)
  {
    arr[i] = temp[i];
  }
  cout << "-----------" << endl;
  for(int i = 0; i < rows; i++)
  {
    for(int j = 0; j < clmns; j++)
    {
      cout <<  temp[i][j]; 
    }
    cout << endl;
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
  move_rows(arr, rows, clmns);
//   for(int i = 0; i < rows; i++)
//   {
//     for(int j = 0; j < clmns; j++)
//     {
//       cout << arr[i][j];
//     } 
//     cout << endl;
// }
  

  return 0;
}