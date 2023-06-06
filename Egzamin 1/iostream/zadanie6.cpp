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
    FILE *file = fopen("test01.txt", "r");
    char finder[255];
    while(fscanf(file, "%255s", finder) == 1)
    {
        string temptxt = finder;
        if(temptxt.find("any") != string::npos) cout << finder << endl;
    }
	return 0;
}