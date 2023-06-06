#include <iostream>
#include <ctime>
#include <cmath>
#include <cstdlib>
using namespace std;

int which_numb(unsigned int n)
{
    if(n < 2) return 1;
    else if(n >= 2 && n < 10) return (2 * which_numb(n - 1));
    else if(n >= 10) return (3 * which_numb(n - 1) - which_numb(n - 3));

}



int main()
{
    unsigned int n;
    cout << "wprowadz wartosc liczbowa n" << endl;
    cin >> n;
    cout << which_numb(n) << endl;

    return 0;
}
