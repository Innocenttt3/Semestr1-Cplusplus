#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int matRows(int arr[], int n, int m)
{   
    int licznik = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m - 1; j++)
       {
            if(arr[(i*m+j)] > arr[i*m+j+1])
                break;
            if(j == m - 2)
                licznik++;
            
       }
       
    }
    return licznik;
}

int main()
{
    int n, m;
    cout << "wiersze: ";
    cin >> n;
    cout << "kolumny: ";
    cin >> m;
    int arr[] = {'1', '6', '3', '5', '6', '7'};
    cout << matRows (arr, n, m);

    return 0;
}