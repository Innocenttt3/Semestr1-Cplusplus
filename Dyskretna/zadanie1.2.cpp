#include <iostream>
using namespace std;


int sudan(int x, int y, int n){
    if(n == 0 ) return x + y;
    if(n - 1 >= 0 && y == 0) return x;
    y--;
    return sudan(sudan(x, y, n), sudan(x, y, n) + y + 1, n-1);

}

int main()

{
    cout << sudan(8, 10, 1);
    return 0;
}