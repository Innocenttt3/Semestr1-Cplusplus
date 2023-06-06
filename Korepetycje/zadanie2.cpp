#include <iostream>
using namespace std;


int randomisor(int bottom, int max){

    int returnValue = 0;
    returnValue = (rand()%(max-bottom + 1) + bottom);
    return returnValue; 
}


int main(){

    int product = 1;
    int amountOfOdd = 0;
    // srand(time(NULL));
    int arr[14] = {0};
    for(int i = 0; i < 14; i++){
        arr[i] = randomisor(2,9);
    }
     for(int i = 0; i < 14; i++){
        cout << arr[i] << " ";
    }
    for(int i = 0; i < 14; i++){
        if(i > 10){
            product *= arr[i];
        }
    }
    for(int i = 0; i < 14; i++){
        if(i > 10 && arr[i]%2 != 0){
            amountOfOdd++;
        }
    }
    cout << endl;
    cout << product;
    cout << endl;
    cout << amountOfOdd;


    return 0; 
}