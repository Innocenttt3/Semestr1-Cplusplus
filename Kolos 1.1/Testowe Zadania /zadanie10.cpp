#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

void counter(char str[], unsigned int occ[], const int size)
{
    int how_much = 0;
    for (int i = 0; i < size - 1; i++)
    {
    if(str[i] >= 'A' && str[i] <= 'Z') str[i] += 32;
        for (int j = 0; j < size - 1; j++)
        {
           if(str[i] >= 'A' && str[i] <= 'Z') str[j] += 32;
           if(str[i] == str[j]) how_much += 1;
        }
    occ[i] = how_much;
    cout << occ[i] << ", ";
    how_much = 0;
    }



}

int main()
{
    
    char str[] = {"Ala ma kota"};
    const int size = sizeof(str); 
    unsigned int occ[size] = {0};
    counter(str, occ, size);
   
    return 0;

}

















