#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int randomisor(int num_1, int num_2)
{
    int  random_number;
    random_number = ((rand()%(num_2 - num_1 + 1)) + num_1); 
    if(random_number > 90 && random_number < 97)
    randomisor(num_1, num_2);
    else
    return random_number;
}

char sentence(int n, int m)
{
    int  random_limit = 0;
    for(int i = 0; i < n; i++) 
    {
        random_limit = randomisor(0, m);
        for(int j = 0; j < random_limit; j++)    
       {
            cout << char(randomisor(65, 122));
        }
        cout << " ";
    }

}

int main()
{   
    srand(time(NULL));
    int n;
    int m;
    cout << "podaj wartosci m oraz n: " << endl;
    cin >> n;
    cin >> m;
    sentence(n, m);
    
    return 0;
}
