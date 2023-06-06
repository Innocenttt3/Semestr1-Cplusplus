#include <iostream>
#include <cmath>
#include <ctime>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <cstdio>

using namespace std;

int randomisor()
{
  return rand()%11;
}

void openFile(const char* name, int size )
{
  FILE *file = fopen(name, "w");
  if(file)
  {
    for (int i = 0; i < 10; i++)
    {
      int randomValue = randomisor();
      fprintf(file, "%d ", randomValue);
      cout << randomValue << " ";
    }
  }
  else
  {
    cout << "error with opening file";
  }
  fclose(file);
}

int main() 
{ 
  srand(time(NULL));
  openFile("test01.txt", 10);

	return 0;
}


