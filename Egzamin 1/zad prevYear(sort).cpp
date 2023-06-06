#include <iostream>
#include <cmath>
#include <ctime>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>
#include <cstdio>
using namespace std;

void sorter(char *str, int counter)
{
    char temp;
    for (int i = 0; i < counter - 1; i++)
    {
        for (int j = 0; j < counter - i - 1; j++)
        {
            if(str[j] >= str[j+1])
            {   
                char temp = str[j];
                str[j] = str[j+1];
                str[j+ 1] = temp;
            }
        }
    }
}

void str_sort(char str[])
{
    int counter = 0;
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
           str[i] += 32;
        }
        i++;
        counter++;
    }
    sorter(str, counter);
    
}
void letter_count(char *str)
{
    int same = 0;
    int counter = 0;
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
        counter++;
    }
    for (int i = 0; i < counter; i++)
    {
        for (int j = 0; j < counter; j++)
        {
            if (str[i] == str[j])
            {
                same++;
            }
        }
        if(str[i] != str[i-1])
        {
            cout << str[i] << " " << same << endl;
        }
        same = 0;
    }
}
int main() 
{ 
  char str[] = {"Practice makes perfect"};
    str_sort(str);
    letter_count(str);
	return 0;
}




