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
  char bin[100];
  FILE *file = fopen("test01.txt", "r+");
  while(fscanf(file, " %255s", bin) == 1)
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
  while(fscanf(file, " %255s ", bin) == 1)
  {
    strcpy(arr[i], bin);
    i++;
  }
  for ( int i = 0; i < counter; i++)
  {    
    cout << arr[i] << endl;
  }
  for ( int i = 0; i < counter; i++)
  {    
    delete[] arr[i];
  }
  delete[] arr;
	return 0;
}


