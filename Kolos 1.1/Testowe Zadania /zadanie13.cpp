#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <cstdio>

using namespace std;


void longest_number(int arr[], int size, int values[])
{    
    int index = 0;
    int top_number = 0;
    int counter = 0; 
    int temp_value = 0;
    for(int i = 0; i < size; i++)
    {
        temp_value = arr[i];
        for(int j = 0; temp_value > 0; j++)
        {
            if(temp_value % 2 == 1) counter += 1;
            temp_value = temp_value / 2;
            
        }
    values[i] = counter;
    counter = 0;
    }
    for(int i = 0; i < size; i++)
    {
        if(top_number <= values[i])
        {
            top_number = values[i];  
            index = i;
        }
            

    }
    cout << top_number << endl;
    cout << arr[index];

}

int main()
{
    int values[] = {0};
    int arr[] = {1, 2, 0b101010, 0b110001};
    int size = 0;
    size = sizeof(arr)/sizeof(int);
    longest_number(arr, size, values);

    return 0;
}

