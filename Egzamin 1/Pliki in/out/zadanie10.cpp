#include <iostream>
#include <cmath>
#include <ctime>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <cstdio>
using namespace std;


void txtEditor(const char* name, const char* txt)
{
  FILE *file = fopen(name, "r+");
  char temp[255];
  char temp2[255];
  char *temporary;
  FILE *tmpf = tmpfile();
  fgets(temp, 255, file);
  temporary = strtok(temp, "*");
  fprintf(tmpf, "%s", temporary);
  fprintf(tmpf, "%s", txt);
  while (temporary != NULL)
  {
    temporary = strtok(NULL, "*");
    fprintf(tmpf, "%s", temporary);
    fprintf(tmpf, "%s", txt);
  }
  rewind(tmpf);
  fgets(temp2, 255, tmpf);
  cout << temp2;
  fclose(file);
  FILE *file1 = fopen(name, "w");
  rewind(file1);
  fputs(temp2, file1);

}

int main() 
{ 
  txtEditor("test01.txt", "super");
	return 0;
}