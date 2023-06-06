#include <iostream>
#include <cmath>
using namespace std;



int main()
{

    unsigned char temp_value = 0b00000000;
    unsigned char t, s;
    scanf("%hhu %hhu", &t, &s);
    temp_value = s;
    temp_value <<= 4;
    s >>= 4;
    s += temp_value;
    t %= 8;
    s ^= (1 << t);
    cout << (int)s << endl;

    return 0;
}
