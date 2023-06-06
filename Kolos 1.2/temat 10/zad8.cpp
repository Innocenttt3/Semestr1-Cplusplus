#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

int sim(int x, int d, int counter)
{
  if(x % 10 == d) return sim(x/10, d, ++counter);
  else if(x == 0) return counter;
}


int main()
{
  int counter;
  int x;
  int d;
  cin >> x;
  cin >> d;
  cout << sim(x, d, 0);
  
  return 0;
}