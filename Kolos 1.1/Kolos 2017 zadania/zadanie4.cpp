#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

bool check_bin(int x, int y)
{   
    int counter_0_x = 0;
    int counter_1_x = 0;
    int counter_0_y = 0;
    int counter_1_y = 0;
    while(x)
    {
        if(x % 2 == 1)
            counter_1_x += 1;
        else
            counter_0_x += 1;

        x /= 2;
    }
    while(y)
    {
        if(y % 2 == 1)
            counter_1_y += 1;
        else
            counter_0_y += 1;

        y /= 2;
    }
    if(counter_0_x == counter_0_y && counter_1_x == counter_1_y)
        return true;
    
    return false;
}

int main()
{
    int x, y;
    cout << "wprowadz wartosc x" << endl;
    cin >> x;
    cout << "wprowadz wartosc y" << endl;
    cin >> y;
    cout << check_bin(x, y);

    return 0;
}