#include <iostream>
#include <cmath>
using namespace std;


 float fun_aux(float v1, float v2, float v3)
{
  if(v1 >= v2 && v1 >= v3) return v1;
  else if(v2 >= v1 && v2 >= v3) return v2;
  else if(v3 >= v1 && v3 >= v2) return v3;
}
void fun_arr(float* tab1, float* tab2, int size_tabs, float(*ptr)(float, float, float))
{
  for (int i = 0; i < size_tabs; i++)
  {
    tab2[i] = ptr(tab1[3 * i], tab1[(3 * i) + 1], tab1[(3 * i) + 2]);
  }
}


int main() 
{  
  // const int size = 4;
  // float arr1[3 * size] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
  // float arr2[size];
  int sizino = 0;
  cin >> sizino;
  float* arr1 = new float[sizino * 3];
  float* arr2 = new float[sizino];

  float(*ptr_to_fun)(float, float, float);
  ptr_to_fun = fun_aux;
  for (int i = 0; i < sizino * 3; i++)
  {
    cin >> arr1[i];
  }
  fun_arr(arr1, arr2, sizino, ptr_to_fun);
  delete[] arr1;
  for(int i = 0; i < sizino; i++)
  {
    cout << arr2[i] << endl;
  }
  delete arr2;
return 0;
}


