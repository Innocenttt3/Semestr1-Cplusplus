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
// ' ' - 32
// 97-122 a-z

void intoAtBash(char* arr, int size)
{
    char *txtTemp = new char[size];
    int distance = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] >= 'a' && arr[i] <= 'z')
        {
            distance = arr[i] - 'a';
            txtTemp[i] = 'z' - distance;
            
        }
    }
     for (int i = 0; i < size; i++)
    {
        arr[i] = txtTemp[i];
        cout << arr[i];
    }
    delete[] txtTemp;
}

void readoAtBash(char* arr, int size)
{
    char *txtTemp = new char[size];
    int distance = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] >= 'a' && arr[i] <= 'z')
        {
            distance = arr[i] - 'z';
            txtTemp[i] = 'a' - distance;
            
        }
    }
     for (int i = 0; i < size; i++)
    {
        arr[i] = txtTemp[i];
        cout << arr[i];
    }
    delete[] txtTemp;
}

int main()
{
    string txt;
    getline(cin, txt);
    transform(txt.begin(), txt.end(), txt.begin(), ::tolower);
    char *txtChar = new char[txt.length()];
    strcpy(txtChar, txt.c_str());
    int size = txt.length();
    intoAtBash(txtChar, size);
    cout << endl;
    string txt2;
    getline(cin, txt2);
    transform(txt2.begin(), txt2.end(), txt2.begin(), ::tolower);
    char *txtChar2 = new char[txt2.length()];
    strcpy(txtChar2, txt2.c_str());
    int size2 = txt.length();
    readoAtBash(txtChar2, size2);
    

    

	return 0;
}