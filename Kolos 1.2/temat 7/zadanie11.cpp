#include <iostream>
using namespace std;


int recur(char* start, int counter)
{
  if(*start) return recur(++start, ++counter);
  else return counter;


}
int boring(char* start)
{
  int counter = 0;
  while(*start)
  {
    counter++;
    start++;
  }
  return counter;
}
  
int main() 
{
  char str[] = {"mleko"};
  cout << recur(str, 0) << endl;
  cout << boring(str) << endl;
  
  

  return 0;
}