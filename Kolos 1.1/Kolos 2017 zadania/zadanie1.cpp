#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <cstdio>
using namespace std;

void crossing(float a, float b)
{
    float result = 0;
    result = b / a;
     cout << result;
    

}
int main()
{
    float a, b;
    cout << "wprowadz wspolczynnik a-> ";
    cin >> a;
    cout << "wprowadz wspolczynnik b-> ";
    cin >> b;
    crossing(a, b);



    return 0;
}