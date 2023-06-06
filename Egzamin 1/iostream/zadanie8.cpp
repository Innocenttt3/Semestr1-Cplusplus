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


int main()
{
    char name[10];
    int age;
    float height;
    float weight;
    scanf("%10s %d %f %f", name, &age, &height, &weight);
    cout << name << endl;
    cout << hex  << age << endl;
    printf("%.2f \n", height);
    printf("%.3f \n", weight);
	return 0;


}