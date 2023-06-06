#include <iostream>
#include <algorithm>
using namespace std;

void print( int x )
{
    cout << x << endl;
}

int main()
{
    char a[100] = {"aaaaaa"};
    
    for_each( a, a + 50, print );

  return 0;
}