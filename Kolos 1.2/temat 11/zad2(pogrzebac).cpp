#include <iostream>
using namespace std;

const int N = 3;

void addMatrix(int **A, int **B) 
{
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            *(*(A+i)+j) += *(*(B+i)+j);
        }
    }
}

void subtractMatrix(int **A, int **B) 
{
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            *(*(A+i)+j) -= *(*(B+i)+j);
        }
    }
}

int main() 
{
    int which;
    cin >> which;
    int **A = new int*[N];
    int **B = new int*[N];
    for (int i = 0; i < N; i++) 
    {
        A[i] = new int[N];
        B[i] = new int[N];
    }
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            *(*(A+i)+j) = 2;
            *(*(B+i)+j) = 1;
        }
    }
    void(*ptr_to_fun[2])(int**, int**);
    ptr_to_fun[0] = addMatrix;
    ptr_to_fun[1] = subtractMatrix;
    ptr_to_fun[which](A, B);
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            cout << *(*(A+i)+j);
            
        }
        cout << endl;
    }


return 0;
}