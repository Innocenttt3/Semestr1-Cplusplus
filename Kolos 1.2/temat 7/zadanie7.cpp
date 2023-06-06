#include <iostream>
using namespace std;





int main() 
{
  float value = 1.5f;
  float *ptr = &value;
  cout << *(unsigned int*)ptr << endl;
  
 

  return 0;
}