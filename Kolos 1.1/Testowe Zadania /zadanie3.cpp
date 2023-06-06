#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

void convert(char arr[], int x)
{   
    int liczba = 0;
    for(int i = 1; i <= x ; i++)
    {
    liczba += pow(10, x-i) * (arr[i] - '0');   
    
    }
    cout << liczba << endl; 
}

int main()

{   
    const int x = 4;
    char arr[x];
    cout << "podaj liczbe:" << endl;
    for(int i = 1; i<=x; i++)
    {
        cin >> arr[i];
    }
    convert(arr, x);

    return 0;
}