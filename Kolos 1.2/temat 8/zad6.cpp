#include <iostream>
#include <cstring>
#include <ctime>
#include <cmath>
using namespace std;

void weird(float arr1[], int size1, int arr2[], int size2)
{
  int index = 0;
  for( int i = 0; i < size2; i++)
  {
    if(arr2[i] > size1) cout << "NAN" << endl;
    else 
    {
      index = arr2[i];
      cout << arr1[index - 1] << endl;
    } 
  }
}


int main() 
{
  float inside = 1.1;
  float* arr1 = new float[5];
  for(int i = 0; i < 5; i++)
  {
    arr1[i] = inside;
    inside += 1.1;
  }
  int* arr2 = new int[5];
  cout << "podaj indeksy: " << endl;
  for(int i = 0; i < 5; i++)
  {
    cin >> arr2[i];
  }
  weird(arr1, 5, arr2, 5);


  
  return 0;
}