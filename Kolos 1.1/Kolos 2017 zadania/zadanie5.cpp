#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

int mem[10000];

int object_T(int k, int x)
{   
    if(mem[k])  return mem[k];
    if(k == 0) return 1;
    if(k == 1) return x;
    return  mem[k] = 2 * x * object_T(k-1, x) - object_T(k-2, x); 
   
    
}

int main()
{
   int k, x;
   cout << "ktory wyraz ciagu? ->";
   cin >> k;
   cout << "wprowadz wartosc x ->";
   cin >> x;
   cout << object_T(k, x); 
    
    return 0;

}