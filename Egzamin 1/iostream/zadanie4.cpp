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
    time_t now = time(0);
    tm *ltm = localtime(&now);
    FILE *file = fopen("test01.txt", "a");
    fprintf(file, "%d-%d-%d %d:%d:%d", ltm->tm_mday, 1+ ltm->tm_mon, 1900+ ltm->tm_year, ltm->tm_hour, ltm->tm_min, ltm->tm_sec);

	return 0;
}