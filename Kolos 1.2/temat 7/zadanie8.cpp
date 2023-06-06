#include <iostream>
using namespace std;


int* lower(int* value1, int* value2)
{
  if(*value1 > *value2) return value2;
  else return value1;
}


int main() 
{
  int liczba1 = 3;
  int liczba2 = 4;
  cout << "adres mniejszej: " << &liczba1 << endl;
  cout << lower(&liczba1, &liczba2);
 

  return 0;
}