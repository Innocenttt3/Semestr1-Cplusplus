#include <iostream>
#include <cstring>
using namespace std;


int main() 
{
  unsigned int n = 0;
  cin >> n;
  int* tab = new int[n];
  for(int i = 0; i < n; i++)
  {
    tab[i] = 0;
    cout << tab[i] << endl;
  }
  delete[] tab;
  n = 10;
  tab = new int[n];
  for( int j = 0; j < n; j++)
  {
    tab[j] = 1;
    cout << tab[j] << endl;
  }
  delete[] tab;
  tab = nullptr;

return 0;
}