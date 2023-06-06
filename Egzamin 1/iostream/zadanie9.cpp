#include <iostream>
#include <cmath>
#include <ctime>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <cstdio>
#include <string>
using namespace std;


struct City
{   
    public:
    string nameOfCity;
    unsigned int habitancy;
    double x;
    double y;
};
    ostream& operator <<(ostream &out, City &city)
    {
        cout << city.nameOfCity << endl;
        cout << city.habitancy << endl;
        cout << city.x << endl;
        cout << city.y << endl;
        return out;
    }

    istream& operator >>(istream &in, City &city)
    {
        string a;
        unsigned int b;
        double c, d;
        cin >> a >> b >> c >> d;
        city.nameOfCity = a;
        city.habitancy = b;
        city.x = c;
        city.y = d;
        return in;
    }
int main()
{
    City LegoCity;
    LegoCity.nameOfCity = "hogwart";
    LegoCity.habitancy = 120;
    LegoCity.x = 10;
    LegoCity.y = 20;
    cin >> LegoCity;
    cout << LegoCity;

	return 0;


}