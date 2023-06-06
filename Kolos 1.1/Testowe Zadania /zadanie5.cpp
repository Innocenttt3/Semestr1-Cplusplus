#include <iostream>
#include <cmath>
using namespace std;

float funct(float arr[], int n)
{   
    if(n == 0)
    return 0;
    else
    return pow(-1, n) * arr[n-1] + funct(arr, n-1);
}

int main() 
{   
    int n;
    cout << "podaj wartosc n: ";
    cin >> n;
    float arr[20];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 1; i <= n; i++)
       cout << funct(arr, i) << endl;
    return 0;
}