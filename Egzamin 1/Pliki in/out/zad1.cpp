#include <iostream>
#include <cmath>
#include <ctime>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <cstdio>

using namespace std;

void openFile(const char* name)
{
  int number = 0;
  FILE *file = fopen(name, "r");
  if(file)
  {
      while( fscanf(file, "%d ", &number) == true )
      {
        cout << number << " ";
      }
      
  }
  else
  {
    cout << "error with opening file";
  }

}

int main() 
{ 
  openFile("test01.txt");

	return 0;
}


