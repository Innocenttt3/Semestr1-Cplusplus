#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

int cock(unsigned char v, int b, int n)
{
    int temp_value = 0;
    temp_value = pow(2, n-1) * 2 - 1;
    temp_value <<= b;
    v &= temp_value;
    v >>= b;
    return v;
}

int main()
{
    unsigned char v = 45;
    int n = 3;
    int b = 2;
    cout << cock(v, b, n);

    return 0;

}

















