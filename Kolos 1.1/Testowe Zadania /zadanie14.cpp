#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

void hehe(unsigned char v, int b, bool f)
{
    int temp = 0b00001111;
    v &= temp;
    if ( f == true ) v ^= 0b00001111;

    v ^= 1 << b;
    cout << (int)v;
}

int main()
{
    unsigned char v = 13;
    int b = 6;
    bool f = true;
    hehe(v, b, f);

    return 0;
}