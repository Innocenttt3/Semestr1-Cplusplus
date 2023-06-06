#include <iostream>
#include <cmath>
#include <ctime>
#include <algorithm>
#include <cstdlib>
#include <cstring>
using namespace std;

enum DataType
{
  CHAR = 1,
  UCHAR = 2,
  INT = 3,
  FLOAT = 4
};

void random_name(void* arr, int size_of_arr, enum DataType which_type)
{
  int sum = 0;
  switch(which_type)
  {

  // case CHAR:
  // {
  //   char* charArr = (char*) arr;
  // }
  // case UCHAR:
  // {
  //   unsigned char* ucharArr = (unsigned char*) arr;
  //   for( int i = 0; i < size_of_arr; i++)
  //   {
  //     sum += ucharArr[i]; 
  //   }
  // }
  case INT:
  {
    int* intArr = (int*) arr;
    for( int i = 0; i < size_of_arr; i++)
    {
      sum += intArr[i]; 
    }

  }
  case FLOAT:
  {
    float* floatArr = (float*) arr;
    for( int i = 0; i < size_of_arr; i++)
    {
      sum += floatArr[i]; 
    }
  }
  }
  cout << sum/size_of_arr;
}
int main() 
{

  int arrInt[] = {1, 2, 3, 4, 5};
  float arrFloat[] = {1.0, 2.0, 3.0, 4.0, 5.0};

    cout << "Srednia dla tablicy int: " << endl;
    random_name(arrInt, 5, INT);
    cout << endl;
    cout << "Srednia dla tablicy float: ";
    cout << endl;
    random_name(arrFloat, 5, FLOAT);

	return 0;
}


