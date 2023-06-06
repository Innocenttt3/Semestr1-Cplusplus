//blad logiczny w tresci 
#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int losowanie()
{   
    int random_value;
    random_value = rand()%10;
    return random_value;
}

float funct(unsigned int a)
{
    if(a == 0)
        return 0;
    else if(a == 1)
        return 1;
    else
        return funct(a-1) * sqrt(funct(a-2));

}

int main()
{
    srand(time(NULL));
    int liczba;
    for(int i = 0; i < 10; i++)
    {
        liczba = losowanie();
        cout << liczba << " ";
        cout << funct(liczba) << endl;  
    }
    
    return 0;
}