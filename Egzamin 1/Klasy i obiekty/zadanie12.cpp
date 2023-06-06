#include <iostream>
#include <cmath>
#include <ctime>
#include <algorithm>
#include <cstdlib>
#include <cstring>
using namespace std;

class Vector
{
  private:
  int *arr;
  int size;

  public:
  void init(int size)
  {
    arr = new int[size];
    this->size = size;
  }
  int& at(int i)
  {
    return arr[i];
  }
  void append(int v)
  {
    int *arr2 = new int[this->size+1];
    memcpy(arr2, arr, this->size);
    delete[] arr;
    this->size++;
    arr = arr2;
    arr[this->size] = v;
    delete[] arr2;
  }

  void resize(int size)
  {
    int *arr2 = new int[size];
    memcpy(arr2, arr, this->size);
    delete[] arr;
    this->size = size;
    arr = arr2;
    delete[] arr2;
  }
  int size()
  {
    return this->size;
  }
  void clear()
  {
    delete[] arr;
    this->size = 0;
  }
  ~Vector()
  {
    delete[] arr;
  }
};

int main() 
{
 


	return 0;
}


