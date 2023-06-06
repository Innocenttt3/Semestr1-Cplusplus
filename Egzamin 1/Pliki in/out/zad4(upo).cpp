#include <iostream>
#include <cmath>
#include <ctime>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <cstdio>
using namespace std;

void resize_numbers(const char* name)
{
  FILE *file = fopen(name, "r");
  if(file == NULL)
  {
    cout << "error opening file";
  }
  FILE *tmpf = tmpfile();
  int tempValue;
  while(fscanf(file, "%d ", &tempValue) == 1)
  {
    tempValue++;
    fprintf(tmpf, "%d ", tempValue);
  }
  fclose(file);
  FILE *file1 = fopen(name, "w");
  rewind(tmpf);
  while(fscanf(tmpf, "%d ", &tempValue) == 1)
  {
    fprintf(file1, "%d ", tempValue);
  }
  fclose(file1);
}


int main() 
{ 
  resize_numbers("test01.txt");

	return 0;
}


