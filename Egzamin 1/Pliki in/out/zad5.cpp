#include <iostream>
#include <cmath>
#include <ctime>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>
#include <cstdio>
using namespace std;

void write_array(const char* name, float tab[], int amountElements)
{
  FILE *file = fopen(name, "wb");
  fwrite(tab, sizeof(float), amountElements, file);
  fclose(file);
}

void read_array(const char* name, float tab[], int amountElements)
{
  FILE *file = fopen(name, "rb");
  fread(tab, sizeof(float), amountElements, file);
  fclose(file);
}

int main() 
{ 
  const int n = 5;
  float buffer[n] = { 1.1f, 2, 3.14f, 151.0f, 0.04f };
  float read[n] = {};
  write_array("test01.txt", buffer, n);
  // read_array("test01.txt", read, n);


	return 0;
}




