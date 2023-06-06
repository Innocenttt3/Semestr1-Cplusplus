#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
#include <time.h>
#include <cstdlib>
#include <algorithm>
#include <cstdio>
using namespace std;

void fun(float arr1[], int n, int arr2[], int m)
{
    for(int i=0; i<m; i++)
    {
       if(arr2[i] >= n)
            cout << "[" << arr2[i] << "]=NAN" << endl; 
       else
            cout << "[" << arr2[i] << "]=" << arr1[arr2[i]] << endl;
    }   
}

int main ()
{
    const int n = 5;
    const int m = 5;
    float arr1[n] = {2.3, 3.1, 0.5, 3.4, 5.2};
    int arr2[m] = {4, 1, 3, 9, 1};
    fun(arr1, n, arr2, m);
    
    return 0;
}