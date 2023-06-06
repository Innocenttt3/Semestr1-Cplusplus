#include <iostream>
using namespace std;

void sum_machine(int& first, int& second, int& third)
{
  third = first + second;
}

int main() 
{
  int liczba1 = 2;
  int liczba2 = 3;
  int liczba3 = 4;
  cout << "start value of liczba2: " << liczba3 << endl;
  sum_machine(liczba1, liczba2, liczba3);
  cout << "value of liczba2 after function: " << liczba3 << endl;




  return 0;
}