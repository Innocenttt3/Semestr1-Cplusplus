#include <iostream>
#include <cmath>
using namespace std;

int func(char arr[], int val, int i, int s) 
{
    if (i == s) return val;

    val += (arr[i] - '0') * pow(2, s - i - 1);

    return func(arr, val, ++i, s);
}

int main() 
{   
    int size = 0;
    char arr[] = {'1', '1', '1', '1', '1', '1', '1', '1'};
    size = sizeof(arr);
    cout << size << endl;
    cout << func(arr, 0, 0, size);

    return 0;
}