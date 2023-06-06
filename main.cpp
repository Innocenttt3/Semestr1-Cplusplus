#include <iostream>
using namespace std;


int ackermman(int m, int n){

    if (m == 0) {
        cout << n+1 << endl;
        return n+1;
    }
    if (m > 0 && n == 0) {
        cout << "A(" << m-1 << ", " << 1 << ")" <<  endl;
        return ackermman( m-1, 1);
    }
    cout << "A(" << m - 1 << ", ";
    if ( m > 0 && n > 0) {
        cout << "A(" << m << ", " << n - 1 << ")";
        return ackermman(m, n-1);
    }
    cout << ")" << endl;
    return ackermman(m-1, n);
}

int main()

{
    ackermman(2, 2);
    
    return 0;
}