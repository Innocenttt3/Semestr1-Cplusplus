#include <iostream>
using namespace std;


void swap(const int* value,  int * const value2)
{
  *value2 = *value;
}
  
int main() 
{
  const int value1 = 10;
  int value2 = 20;
  swap(&value1, &value2);
  cout << value1 << endl;
  cout << value2 << endl;
  
  

  return 0;
}