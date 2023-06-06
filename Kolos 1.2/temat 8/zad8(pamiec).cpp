#include <iostream>
#include <cstring>
#include <ctime>
#include <cmath>
using namespace std;



template<size_t N, size_t M>
void print2d(int (&arr)[N][M]) 
{
    for (size_t i = 0; i < N; ++i) {
        for (size_t j = 0; j < M; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() 
{
    int arr1[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    std::cout << "arr1:" << std::endl;
    print2d(arr1);

    int arr2[2][5] = {{1, 2, 3, 4,5}, {6, 7, 8, 9, 10}};
    std::cout << "arr2:" << std::endl;
    print2d(arr2);

    return 0;
return 0;
}