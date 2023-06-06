#include <iostream>
#include <ctime>
#include <cmath>
#include <cstdlib>
using namespace std;

void name(char c_string[], int size)
{
    int result = 0;
    int temp_value = 0;
    for(int i = 0; i < size - 1; i++)
    {  
        temp_value = c_string[i];
        if(temp_value < 48 || temp_value > 57)
        {
            result = -1;
            break;  
        }
        else
            result += (c_string[i] - '0') * pow(10, (size - i - 2 )); 
        
            
        
    }
    cout << result << endl; 
    
}


int main()
{
    char c_string_1[] = {"123cd"};
    char c_string_2[] = {"1001"};
    int size_1 = sizeof(c_string_1);
    int size_2 = sizeof(c_string_2);
    name(c_string_1, size_1);
    name(c_string_2, size_2);

    
    




    return 0;
}
