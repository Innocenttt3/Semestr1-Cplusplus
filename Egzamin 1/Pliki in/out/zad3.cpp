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
  char filename[] = {"test01.txt"};
  int resultOfRemove = remove(filename);
  if(resultOfRemove == 0) cout << "file was deleted";
  else cout << "error deleting file";


	return 0;
}


