#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdio>
using namespace std;

int main()
{  
    unsigned int r; 
    cout << "podaj promien kola: " << endl;
    cin >> r;
    int n = 2*r+1;
    bool circle[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            int x = i - r;
            int y = j - r;
            circle[i][j] = (x*x + y*y <= r*r);
        }  
    }
     for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(circle[i][j])
                cout << "#";
            else
                cout << " ";
        }  
    cout << endl;
    }
    return 0;
}


//alternatywne rozwiazanie z bota
// #include <iostream>
// #include <cmath>

// using namespace std;

// int main()
// {
//     int r; // promień koła

//     cout << "Podaj promien kola: ";
//     cin >> r;

//     // iterujemy po osiach x i y
//     for (int y = -r; y <= r; y++)
//     {
//         for (int x = -r; x <= r; x++)
//         {
//             // jeśli punkt (x, y) leży w obrębie koła, wyświetlamy znak '#'
//             if (x * x + y * y <= r * r)
//             {
//                 cout << '#';
//             }
//             else
//             {
//                 cout << ' ';
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }
