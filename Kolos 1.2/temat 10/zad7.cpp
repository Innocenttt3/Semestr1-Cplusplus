#include <iostream>
#include <algorithm>
#include <cstdlib>

using namespace std;



int main()
{
  char number[255];
  cin.getline(number, 255);
  int num = atoi(number);
  num += 10;
  cout << num;
  
  return 0;
}