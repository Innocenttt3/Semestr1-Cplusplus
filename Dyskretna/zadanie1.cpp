#include <iostream>
using namespace std;

int ackermman(int m, int n){

    if (m == 0) return n+1;
    if (m > 0 && n == 0) return ackermman( m-1, 1);
    return ackermman (m-1, ackermman (m, n-1));
}

int main()

{
    cout << ackermman(2, 2);
    
    return 0;
}