#include <iostream>
#include <cmath>
#include <ctime>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <cstdio>
#include <string>
#include <fstream>
using namespace std;


struct City
{   
    public:
    string nameOfCity;
    unsigned int habitancy;
    double x;
    double y;
    City() {};
    City(string nameOfCity, unsigned int habitancy, double x, double y)
    {
        this->nameOfCity = nameOfCity;
        this->habitancy = habitancy;
        this->x = x;
        this->y = y;
    }
    void print()
    {
        cout << nameOfCity << " " << habitancy << " " << x << " " << y;
    }
};

char* StringToChar(string input)
    {
    int size = input.length();
    char* tab = new char[size];
    strcpy(tab, input.c_str());
    return tab;

    }
void putDataIn(City *cities)
{
    fstream file;
    file.open("test01.txt", ios::binary | ios::in);
    file.write((char*) &cities[0], sizeof(City));
    // file.read(y, sizeof(char));
    file.close();
}



int main()
{
    City *cities = new City[3];
    City city1("Lublin", 340000, 51.253678, 22.2559);
    City city2("Warszawa", 17900, 52.256345, 21.01675);
    City city3("Stalowa_wola", 60179, 50.581234,22.0543);
    cities[0] = city1;
    cities[1] = city2;
    cities[2] = city3;
    putDataIn(cities);
	return 0;


}