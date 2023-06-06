#include <iostream>
#include <cstring>
using namespace std;


int main() 
{
  int ciag = 1;
  int n = 0;
  cin >> n;
  int* tab = new int[n];
  for(int i = 0; i < n; i++)
  {
    tab[i] = ciag;
    cout << tab[i] << endl;
  }


  delete[] tab;
  return 0;
}