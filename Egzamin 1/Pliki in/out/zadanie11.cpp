#include <iostream>
#include <cmath>
#include <ctime>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <cstdio>
using namespace std;

struct City
{
  public:
  string cityName;
  int amountHabitancy;
  double x;
  double y;
  City(string name, int value, double x, double y)
  {
    this->cityName = name;
    this->amountHabitancy = value;
    this->x = x;
    this->y = y;
  }
  City() {}
  void print()
  {
    cout << cityName << " " << amountHabitancy << " " << x << " " << y << endl;
  }
};
int charToInt(char * input)
{
  int sum = 0;
  int i = 0;
  while(input[i] != 0)
  {
    sum *=10;
    sum += (int)input[i] - '0';
    i++;
  }
  return sum;
}

int main() 
{
  char bin[255];
  int counterLine = 0;
  FILE *file = fopen("test01.txt", "r+");
  while (fscanf(file, "%255s", bin) == 1)
  {
    counterLine++;
  }
  rewind(file);
  City *cities = new City[counterLine];
  char info[255];
  char *cityName;
  char *habitancy;
  char *coor_x;
  char *coor_y;
  for (int i = 0; i < counterLine; i++)
  {
    fgets(info, 255, file);
    cityName = strtok(info, ",");
    habitancy = strtok(NULL, ",");
    coor_x = strtok(NULL, ",");
    coor_y = strtok(NULL, ",");
    string infoName = cityName;
    City singlecity(infoName, charToInt(habitancy), strtod(coor_x, NULL), strtod(coor_y, NULL));
    cities[i] = singlecity;
  }

  for (int i = 0; i < counterLine; i++)
  {
    cities[i].print();
  }
  delete[] cities;
	return 0;
}