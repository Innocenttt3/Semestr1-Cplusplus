#include <iostream>
#include <cmath>
#include <ctime>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>
#include <cstdio>
#include <fstream>
using namespace std;

void bombublesuperSort(char tab[])
{
    int i = 0;
    int counter = 0;
    while(tab[i] != '\0')
    {
        counter++;
        i++;
    }
    cout << counter;
    for (int i = 0; i < counter - 1; i++)
    {
        for (int j = 0; j < counter - i -1; j++)
        {
            if(tab[j] >= tab[j+1])
            {
                char temp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = temp;
            }
        }

    }
    for (int i = 0; i < counter; i++)
    {
        cout << tab[i] << endl;
    }
}

int main() 
{ 
     char str[] = {"adgehklmo"};
    bombublesuperSort(str);
	return 0;
}




