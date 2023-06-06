#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <cstdio>

using namespace std;

void dyadic(int arr1[], int arr2[], int size, int results[])
{
    for(int i = 0; i < size; i++)
    {
        cout << endl << "mnoze przez -> " << arr1[i] << "| ";
        for(int j = 0; j < size; j++)
        {
            cout << " ";
            results[i*size+j] = arr1[i] * arr2[j];
            cout << results[i*size+j];   
        }    
    }
   
}

int main()
{
    int results[3 * 3] = {0};
    int arr1[] = {1, 2, 3};
    int arr2[] = {1, 2, 3};
    int arrs_size = 3;
    dyadic(arr1, arr2, arrs_size, results);

    

    return 0;
}

