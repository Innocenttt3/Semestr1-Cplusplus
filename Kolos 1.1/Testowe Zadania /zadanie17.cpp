#include <iostream>
#include <ctime>
#include <cmath>
#include <cstdlib>
using namespace std;
// rozpiska - https://magma.com/d/4QSGMmbISl
// n - liczba nadajnikow - 
// tab2 - wspolrzedne x nadajnikow
// tab3 - wspolrzedne y nadajnikow
// tab4 - wspolrzedne z nadajnikow
// r - promien nadajnikow -
// x_person - wspolrzedne x osoby 
// y_person - wspolrzedne x osoby 


void radar(const int n, float r, float tab_x[], float tab_y[], float tab_z[], float x, float y)
{
    const int size = 6;
    float results[size];
    float min_value = 256;
    float distance;
    float a_pow;
    float z_pow;
    float min_index = 0;
    for(int i = 0; i < n; i++)
    {
        a_pow = sqrt(pow((x - tab_x[i]), 2) + pow((y - tab_y[i]), 2)); 
        z_pow = pow(tab_z[i], 2);
        distance =  sqrt(a_pow + z_pow);
        results[i] = distance;
        if(min_value > results[i])
        {
            min_value = results[i];
            min_index = i;
        } 
    }
    cout << min_index;
}



int main()
{
    const int n = 6;
    float r = 2.5 ;
    float tab_x[n] = {2, 2, 3, 5, 6, 8};
    float tab_y[n] = {2, 6, 3, 7, 1, 6};
    float tab_z[n] = {2, 1, 1.5, 2, 2, 2};
    float x = 7;
    float y = 2;
    radar(n ,r, tab_x, tab_y, tab_z, x, y); 

    return 0;
  
}
