#include <iostream>
#include <cmath>
#include <ctime>
#include <algorithm>
#include <cstdlib>
#include <cstring>
using namespace std;

class Array
{
  private:
  int elements;
  int *arr = new int[elements];
  
 
  public:
  Array(int arr[], int elements)
  {
    this->arr = arr;
    this->elements = elements;
  }
  void Copy(const Array &tab)
  {
    elements = tab.elements;
    arr = tab.arr;
  }
  void del_class()
  {
    delete[] arr;
  }
};

int main() 
{ 
  int size
  int tab[3] = {1, 2, 3};
  Array array(tab[], size);

	return 0;
}


