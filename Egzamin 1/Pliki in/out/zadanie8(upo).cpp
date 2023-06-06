#include <iostream>
#include <cmath>
#include <ctime>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <cstdio>
using namespace std;

int main() 
{ 
  int counter = 0;
  char oneLine[100];
  FILE *file = fopen("test01.txt", "r+");
  while(fgets(oneLine, 100, file) != NULL)
  {
      counter++;
  }
  rewind(file);
  char **arr = new char*[counter];
  for ( int i = 0; i < counter; i++)
  {
    arr[i] = new char[100];
  }
  int i = 0;
  while(fgets(oneLine, 100, file) != NULL)
  {
      strcpy(arr[i], oneLine);
      i++;
  }
  for ( int i = 0; i < counter; i++)
  {
    for ( int j = 0; j < 100; j++)
    {
      cout << arr[i][j];
    }

  }
	return 0;
}


